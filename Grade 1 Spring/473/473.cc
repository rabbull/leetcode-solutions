#include <iostream>
#include "Solution.hpp"

using namespace std;

int main() {
    int size;
    cin >> size;
    Solution solution;
    vector<int> nums;
    for (int i = 0; i < size; i ++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    cout << (solution.makesquare(nums) ? "TRUE" : "FALSE") << endl;
}
