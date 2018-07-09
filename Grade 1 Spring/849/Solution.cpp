//
// Created by Karl on 2018/6/15.
//

#include <climits>
#include "Solution.h"

int Solution::maxDistToClosest(std::vector<int>& seats) {
    int maxDist = 0;
    int cnt = 0;

    for (auto e : seats) {
        cnt += e;
    }

    if (cnt == 0) {
        return 0;
    } else if (cnt == 1) {
        for (auto it = seats.begin(); it < seats.end(); it ++) {
            if (*it == 1) {
                int left = it - seats.begin();
                int right = seats.end() - it - 1;

                maxDist = left > right ? left : right;
            }
        }
    } else {
        int left = -1, right = -1;
        std::vector<int>::iterator leftIt, rightIt;
        for (auto it = seats.begin(); it < seats.end(); it ++) {
            if (*it == 1) {
                left = it - seats.begin();
                leftIt = it;
                break;
            }
        }
        for (auto it = seats.end(); it > seats.begin(); it --) {
            if (*it == 1) {
                right = seats.end() - it - 1;
                rightIt = it;
                break;
            }
        }

        maxDist = left > right ? left : right;

        for (auto it = leftIt; it < rightIt; it ++) {
            cnt = 0;
            for (; *it == 0; it ++) {
                cnt += 1;
            }
            if ((cnt + 1) / 2 > maxDist) {
                maxDist = (cnt + 1) / 2;
            }
        }
    }

    return maxDist;
}