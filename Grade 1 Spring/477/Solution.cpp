//
// Created by Karl on 2018/6/14.
//

#include <iostream>
#include "Solution.h"

int HammingDistance (unsigned long, unsigned long);

int Solution::totalHammingDistance(std::vector<int> &nums) {
    int sum = 0;
    for (auto i = nums.begin(); i < nums.end(); i ++) {
        for (auto j = i + 1; j < nums.end(); j ++) {
            sum += HammingDistance((unsigned long) *i, (unsigned long) *j);
        }
    }
    return sum;
}

int HammingDistance(unsigned long x, unsigned long y) {
    unsigned long tmp = x ^y;
    int distance = -1;
    while (distance += 1, tmp != 0) {
        tmp = (tmp) & (tmp - 1);
    }
    return distance;
}
