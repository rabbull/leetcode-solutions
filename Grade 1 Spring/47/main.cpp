#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

class Solution {
private:
    struct ans {
        vector<int> seq;
        vector<bool> book;
    };
public:
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        int length = nums.size();
        queue<ans> rec;
        rec.emplace(ans());
        for (int i = 0; i < length; i++) {
            rec.front().book.push_back(false);
        }

        while (rec.front().seq.size() < length) {
            ans curr = rec.front();
            for (unsigned i = 0; i < length; i++) {
                if (!curr.book.at(i)) {
                    curr.seq.push_back(nums.at(i));
                    curr.book.at(i) = true;
                    rec.push(curr);
                    curr = rec.front();
                }
            }
            rec.pop();
        }

        set<vector<int>> filter;
        int size = rec.size();
        for (int i = 0; i < size; i++) {
            filter.insert(rec.front().seq);
            rec.pop();
        }
        vector<vector<int>> ans;
        for (const auto &e : filter) {
            ans.push_back(e);
        }
        return ans;
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
    auto ans = solution.permuteUnique(nums);
    return 0;
}