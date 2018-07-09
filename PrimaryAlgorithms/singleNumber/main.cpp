/*
 * author: Karl
 * date: 2018-4-28
 * comment: fucking genius idea
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        for (int i = len - 1; i > 0; i --) {
            nums.at(0) = (unsigned) nums.at(0) ^ (unsigned) nums.back();
            nums.erase(nums.end() - 1);
        }
        return nums.at(0);
    }
} solution;

int main() {
    cout << "single number" << endl << "---------------" << endl;
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    cout << solution.singleNumber(nums) << endl;
    return 0;
}
