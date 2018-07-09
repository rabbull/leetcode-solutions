/*
 * author: Karl
 * date: 2018-4-24
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        auto it = nums.begin();
        while (it != nums.end()) {
            while (it + 1 != nums.end() && *(it + 1) == *it) {
                nums.erase(it + 1);
            }
            if (it == nums.end()) {
                break;
            } else {
                it ++;
            }
        }
        return nums.size();
    }
} solution;


int main() {
    cout << "remove duplicates" << endl << "--------------------" << endl;
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    cout << solution.removeDuplicates(nums) << endl;
    for (auto p : nums) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}