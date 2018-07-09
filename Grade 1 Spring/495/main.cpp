#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        sort(timeSeries.begin(), timeSeries.end());
        for (auto it = timeSeries.begin(); it != timeSeries.end(); it += 1) {
            if (it != timeSeries.end() - 1) {
                if (*(it + 1) - *it < duration) {
                    ans += *(it + 1) - *it;
                } else {
                    ans += duration;
                }
            } else {
                ans += duration;
            }
        }
        return ans;
    }
} solution;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}