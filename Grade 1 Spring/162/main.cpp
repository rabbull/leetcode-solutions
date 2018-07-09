#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> nums;
    int tmp = 0;
    while (true) {
        cin >> tmp;
        if (tmp != -1) {
            nums.push_back(tmp);
        } else {
            break;
        }
    }
    cout << solution.findPeakElement(nums) << endl;
    return 0;
}