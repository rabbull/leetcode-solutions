#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    double x;
    int n;
    std::cin >> x >> n;
    std::cout << solution.myPow(x, n) << std::endl;
    return 0;
}