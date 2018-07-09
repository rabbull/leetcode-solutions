#include <iostream>
#include "Solution.h"

int main() {
    std::string p, t;
    std::cin >> t >> p;
    Solution solution;
    std::cout << solution.strStr(t, p) << std::endl;
    return 0;
}