//
// Created by Karl on 2018/6/30.
//

#include "Solution.h"

using namespace std;

vector<vector<int>> Solution::palindromePairs(std::vector<std::string> & words) {
    for (auto word : words) {
        string inverse;
        for (auto c : word) {
            inverse.insert(inverse.cbegin(), c);
        }

        for (auto another : words) {

        }
    }
    return *new vector<vector<int>>();
}
