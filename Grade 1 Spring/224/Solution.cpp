//
// Created by Karl on 2018/7/1.
//

#include <stack>
#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int simpleCalculate(string);

int to_int_ruinous(std::stack<char> &);

int Solution::calculate(std::string s) {
    stack<string> ans;
    ans.push("");
    int tmp;
    auto flag = false;
    for (auto c : s) {
        switch (c) {
            case ' ':
            case '\"':
                break;
            case '(':
                flag = true;
                break;
            case ')':
                tmp = simpleCalculate(ans.top());
                ans.pop();
                ans.top() += to_string(tmp);
                break;
            default:
                if (flag) {
                    flag = false;
                    ans.push(string(""));
                }
                ans.top().push_back(c);
        }
    }
    return simpleCalculate(ans.top());
}

int simpleCalculate(string s) {
    if (s.front() == '-') {
        s.insert(s.cbegin(), '0');
    }
    stack<char> nums;
    int ret = 0;
    int sign = 1;
    auto p = s.begin();
    while (p < s.end()) {
        if (*p == '+' || *p == '-') {
            while (p < s.end() && (*p == '+' || *p == '-')) {
                if (*p == '-') {
                    sign *= -1;
                }
                ++p;
            }
        } else {
            while (p < s.end() && *p != '+' && *p != '-') {
                nums.push(*p);
                ++p;
            }
            ret += sign * to_int_ruinous(nums);
            sign = 1;
        }
    }
    return ret;
}

int to_int_ruinous(stack<char> &s) {
    int ret = 0;
    stack<char> inverse;

    while (!s.empty()) {
        inverse.push(s.top());
        s.pop();
    }

    while (!inverse.empty()) {
        ret *= 10;
        ret += (inverse.top() - '0');
        inverse.pop();
    }
    return ret;
}