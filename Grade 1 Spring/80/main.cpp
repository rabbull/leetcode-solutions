#include <iostream>
#include <vector>
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
    auto size = solution.removeDuplicates(nums);
    for (int i = 0; i < size; i ++) {
        cout << nums.at((unsigned) i) << " ";
    }
    cout << endl << size << endl;
    return 0;
}