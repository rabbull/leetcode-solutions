#include <iostream>
#include "Solution.h"

int main() {
    std::vector<int> seats;
    int tmp = 0;
    while (tmp != -1) {
        std::cin >> tmp;
        seats.push_back(tmp);
    }
    seats.pop_back();
    Solution solution;
    std::cout << solution.maxDistToClosest(seats) << std::endl;
    return 0;
}