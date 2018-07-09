#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> countBit(int num) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        vector<int> rec;
        rec.push_back(0);
        rec.push_back(1);
        while (ans.size() <= num) {
            for (int e : rec) {
                ans.push_back(e + 1);
            }
            for (unsigned j = rec.size(); j < ans.size(); j++) {
                rec.push_back(ans.at(j));
            }
        }
        while (ans.size() > num) {
            ans.pop_back();
        }
        return ans;
    }
} solution;

int main() {
    int n;
    cin >> n;
    vector<int> ans = solution.countBit(n);
    for (int e : ans) {
        cout << e << ", ";
    }
    return 0;
}