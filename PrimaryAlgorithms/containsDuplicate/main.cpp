/*
 * author: Karl
 * date: 2018-4-24
 */

#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> book;
        for (int e : nums) {
            if (book.find(e) != book.end()) {
                return true;
            } else {
                book.insert(e);
            }
        }
        return false;
    }
} solution;

int main() {
    cout << "contains duplicate" << endl << "---------------" << endl;
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    cout << (solution.containsDuplicate(nums) ? "TRUE" : "FALSE") << endl;
    return 0;
}