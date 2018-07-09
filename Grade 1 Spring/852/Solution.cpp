//
// Created by karl on 18-6-20.
//

#include "Solution.h"

int Solution::peakIndexInMountainArray(std::vector<int> &A) {
    long low = 0;
    long high = A.size();
    while (true) {
        if (high - low <= 20) {
            for (long i = low + 1; i < high - 1; i++) {
                if (A.at((unsigned) i) > A.at((unsigned) i - 1) && A.at((unsigned) i) > A.at((unsigned) i + 1)) {
                    return (int) i;
                }
            }
            return -1;
        }
        long mid = (low + high) / 2;
        if (A.at((unsigned) mid) > A.at((unsigned)mid -1) && A.at((unsigned) mid) > A.at((unsigned)mid +1)) {
            return (int) mid;
        } else if (A.at((unsigned) mid) > A.at((unsigned) mid + 1)) {
            high = mid;
        } else {
            low = mid;
        }
    }
}