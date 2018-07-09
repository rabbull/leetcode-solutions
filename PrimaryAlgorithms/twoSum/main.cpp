#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        int len = nums.size();
        for (unsigned i = 0; i < len; i ++) {
            for (unsigned j = i + 1; j < len; j ++) {
                if (nums.at(i) + nums.at(j) == target) {
                    return vector<int>({(int)i, (int)j});
                }
            }
        }
    }
} solution;

int main() {
    cout << "two sum" << endl << "---------------" << endl;
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    cin >> n;
    for (int e : solution.twoSum(nums, n)) {
        cout << e << " ";
    }cout << endl;
    return 0;
}