//
// Created by karl on 18-6-20.
//

#include "Solution.h"

bool isPeak(vector<int>&, long);

int Solution::findPeakElement(vector<int> &nums) {
    long low = 0;
    long high = nums.size();

    if (high == 1) {
        return 0;
    }

    while (true) {
        if (high - low <= 16) {
            for (long i = low; i < high; i++) {
                if (isPeak(nums, i)) {
                    return (int) i;
                }
            }
        }

        long mid = (low + high) / 2;
        if (isPeak(nums, mid)) {
            return (int) mid;
        } else if (nums.at((unsigned) mid) > nums.at((unsigned) mid - 1)) {
            low = mid;
        } else {
            high = mid;
        }
    }
}

bool isPeak(vector<int> & nums, long index) {
    if (index == 0) {
        return nums.at(1) < nums.at(0);
    } else if (index == nums.size() - 1) {
        return *nums.rbegin() > *(nums.rbegin() + 1);
    } else {
        return nums.at((unsigned) index) > nums.at((unsigned) index - 1) &&
               nums.at((unsigned) index) < nums.at((unsigned) index + 1);
    }
}
