//
// Created by Karl on 2018/7/1.
//

#include <string>
#include <climits>
#include "Solution.h"

using namespace std;

int Solution::reverse(int x) {
    long long ans = 0;
    string s = to_string(x);
    if (x < 0) {
        s.erase(s.begin());
    }
    for (auto rit = s.rbegin(); rit < s.rend(); ++rit) {
        ans *= 10;
        ans += *rit - '0';
    }

    if (x < 0) {
        ans = -ans;
    }
    return (ans <= INT_MAX && ans >= INT_MIN) * (int) ans;
}
