#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
private:
    struct ans {
        vector<int> seq;
        vector<bool> book;
    };
public:
    vector<vector<int>> permute(vector<int> &nums) {
        int length = nums.size();
        queue<ans> rec;
        rec.emplace(ans());
        for (int i = 0; i < length; i ++) {
            rec.front().book.push_back(false);
        }

        while (rec.front().seq.size() < length) {
            ans curr = rec.front();
            for(unsigned i = 0; i < length; i ++) {
                if (!curr.book.at(i)) {
                    curr.seq.push_back(nums.at(i));
                    curr.book.at(i) = true;
                    rec.push(curr);
                    curr = rec.front();
                }
            }
            rec.pop();
        }

        vector<vector<int>> ans;
        int size = rec.size();
        for (int i = 0; i < size; i ++) {
            ans.push_back(rec.front().seq);
            rec.pop();
        }
        return ans;
    }
} solution;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    auto ans = solution.permute(nums);
    return 0;
}