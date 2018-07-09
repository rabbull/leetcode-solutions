/*
 * author: Karl
 * date: 2018-4-24
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len == 0) {
            return 0;
        }
        int tot = 0;
        for (unsigned int i = 0; i < len - 1; i ++) {
            if (prices.at(i) < prices.at(i + 1)) {
                tot += prices.at(i + 1) - prices.at(i);
            }
        }
        return tot;
    }
} solution;

int main() {
    cout << "max profit" << endl << "---------------" << endl;
    int n;
    cin >> n;
    vector<int> prices;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        prices.push_back(tmp);
    }
    cout << solution.maxProfit(prices) << endl;
    return 0;
}