#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid) {
        vector<int> X, Y;
        for (auto &l : grid) {
            int max = INT32_MIN;
            for (int h : l) {
                if (h > max) {
                    max = h;
                }
            }
            X.push_back(max);
        }
        int size = grid.size();
        for (unsigned y = 0; y < size; y ++) {
            int max = INT32_MIN;
            for (unsigned x = 0; x < size; x ++) {
                if (grid.at(x).at(y) > max) {
                    max = grid.at(x).at(y);
                }
            }
            Y.push_back(max);
        }

        int ans = 0;
        for (unsigned i = 0; i < size; i ++) {
            for (unsigned j = 0; j < size; j ++) {
                ans += min(X.at(i), Y.at(j));
                ans -= grid.at(i).at(j);
            }
        }

        return ans;
    }
};

int main() {
    return 0;
}