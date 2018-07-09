//
// Created by karl on 18-6-21.
//

#include <iostream>
#include "Solution.h"

int Solution::removeDuplicates(std::vector<int> &nums) {
    if(nums.empty()) {
        return 0;
    }
    for (auto it = nums.begin(); it < nums.end() - 2; ++ it) {
        while (it < nums.end() - 2 && *it == *(it + 1) && *it == *(it + 2)) {
            nums.erase(it + 2);
        }
    }
    return (int) nums.size();
}
