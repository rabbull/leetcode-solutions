//
// Created by Karl on 2018/7/4.
//

#include <climits>
#include "Solution.h"

int Solution::myAtoi(std::string str) {
    long long ans = 0;
    auto head = str.begin();
    while (head < str.end() && *head == ' ') {
        ++head;
    }
    if (head == str.end() || (*head != '+' && *head != '-' && (*head < '0' || *head > '9'))) {
        return 0;
    }
    int sign = 1;
    if (*head == '-') {
        sign = -1;
        ++head;
    } else if (*head == '+') {
        sign = 1;
        ++head;
    }
    auto tail = head;
    while (tail < str.end() && *tail >= '0' && *tail <= '9') {
        ans *= 10;
        ans += (*tail - '0');
        if (sign > 0 && ans > INT_MAX) {
            ans = INT_MAX;
            break;
        }
        if (sign < 0 && ans > - (long long) INT_MIN) {
            ans = - (long long) INT_MIN;
            break;
        }
        ++tail;
    }

    return sign * (int) ans;
}
