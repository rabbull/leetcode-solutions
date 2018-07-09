//
// Created by Karl on 2018/6/25.
//

#include <climits>
#include <cstring>
#include <unordered_set>
#include "Solution.h"

using namespace std;

int Solution::longestConsecutive(std::vector<int> &nums) {
    if (nums.empty()) {
        return 0;
    }

    unordered_set<int> rec;

    for (auto e : nums) {
        rec.insert(e);
    }

    int size = 0;
    int maxsize = INT_MIN;
    auto it = rec.begin();
    auto tmp = it;
    while (!rec.empty()) {
        if (rec.count(*it + 1) != 0) {
            it = rec.find(*it + 1);
            ++size;
            rec.erase(tmp);
        }
        else {
            if (size > maxsize) {
                maxsize = size;
            }
            size = 0;
            ++it;
        }
    }
    return maxsize;
}
