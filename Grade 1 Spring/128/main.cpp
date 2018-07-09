#include <iostream>
#include "Solution.h"
using namespace std;
int main() {
    int tmp = 0;
    vector<int> nums;
    while (true) {
        cin >> tmp;
        if (tmp == -1) {
            break;
        } else {
            nums.push_back(tmp);
        }
    }
    Solution solution;
    cout << solution.longestConsecutive(nums) << endl;
    return 0;
}