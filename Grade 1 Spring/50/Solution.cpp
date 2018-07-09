//
// Created by Karl on 2018/7/1.
//

#include <cmath>
#include <cstdlib>
#include "Solution.h"

double Solution::myPow(double x, int n) {
    unsigned int m = (n > 0 ? (unsigned) n : (unsigned) -n);
    if (n < 0) {
        x = 1 / x;
    }
    double __list[32] = {0};
    __list[0] = x;
    for (int i = 1; i < 32; i++) {
        __list[i] = __list[i - 1] * __list[i - 1];
    }
    bool bio[32] = {false};
    for (int i = 0; i < 32; i ++) {
        bio[i] = (bool) (m & 1);
        m >>= 1;
    }
    double ans = 1;
    for (int i = 0; i < 32; i ++) {
        if (bio[i]) {
            ans *= __list[i];
        }
    }
    return ans;
}