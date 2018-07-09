#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    std::vector<int> nums;
    while (true) {
        int tmp;
        std::cin >> tmp;
        if (tmp == -1) {
            break;
        }
        nums.push_back(tmp);
    }
    std::cout << solution.totalHammingDistance(nums) << std::endl;
    return 0;
}
