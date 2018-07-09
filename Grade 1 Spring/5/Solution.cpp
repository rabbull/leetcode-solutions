//
// Created by Karl on 2018/6/27.
//

#include <climits>
#include <queue>
#include "Solution.h"

using namespace std;

bool borderCheck(std::string &, int, int);

string Solution::longestPalindrome(std::string s) {
    queue<pair<unsigned, unsigned>> rec;
    for (unsigned i = 0; i < s.size(); i++) {
        rec.emplace(i, i + 1);
    }
    for (unsigned i = 0; i < s.size() - 1; i ++) {
        if (s.at(i) == s.at(i + 1)) {
            rec.emplace(i, i + 2);
        }
    }
    pair<unsigned, unsigned> curr;
    while (rec.size() > 0) {
        curr.first = rec.front().first;
        curr.second = rec.front().second;
        rec.pop();
        int low = curr.first - 1;
        int high = curr.second + 1;
        if (borderCheck(s, low, high) && s.at((unsigned) low) == s.at((unsigned) high - 1)) {
            rec.emplace(low, high);
        }
    }

    auto ans = curr;
    return s.substr(ans.first, ans.second - ans.first);
}

inline bool borderCheck(std::string &s, int low, int high) {
    return low >= 0 && high <= s.size() && low < high;
}
