#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void swap(vector<int>::iterator i, vector<int>::iterator j) {
        auto tmp = *i;
        *i = *j;
        *j = tmp;

    }

public:
    void nextPermutation(vector<int> &nums) {
        bool flag = false;
        for (auto it = nums.end() - 1; it > nums.begin(); it--) {
            if (*it > *(it - 1)) {
                swap(it - 1, it);
                auto p = it + 1;
                for (; p < nums.end(); p++) {
                    if (*p < *(it - 1)) {
                        break;
                    }
                }
                swap(it - 1, p - 1);
                sort(it, nums.end());
                flag = true;
                break;
            }
        }
        if (!flag) {
            sort(nums.begin(), nums.end());
        }
    }
} solution;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    solution.nextPermutation(nums);
    return 0;
}