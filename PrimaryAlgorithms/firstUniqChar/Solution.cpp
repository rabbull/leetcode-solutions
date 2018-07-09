//
// Created by Karl on 2018/7/1.
//

#include <climits>
#include "Solution.h"

int Solution::firstUniqChar(std::string s) {
    unsigned long count[CHAR_MAX + 1] = {0};
    for (auto c : s) {
        count[c] += 1;
    }
    for (unsigned i = 0; i < s.size(); i ++) {
        if (count[s.at(i)] == 1) {
            return i;
        }
    }
    return -1;
}