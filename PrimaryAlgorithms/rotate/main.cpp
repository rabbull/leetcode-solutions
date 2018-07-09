/*
 * author: Karl
 * date: 2018-4-24
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for (int i = 0; i < k; i ++) {
            auto tmp = nums.back();
            nums.erase(nums.end() - 1);
            nums.insert(nums.begin(), tmp);
        }
    }
} solution;

int main() {
    cout << "rotate" << endl << "---------------" << endl;
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    int k;
    cin >> k;
    solution.rotate(nums, k);
    for (auto p : nums) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}