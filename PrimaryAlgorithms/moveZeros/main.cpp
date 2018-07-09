#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeros(vector<int>& nums) {
        auto it = nums.begin();
        int cnt = 0;
        while (it != nums.end()) {
            if (*it == 0) {
                nums.erase(it);
                cnt ++;
            } else {
                it++;
            }
        }
        while (cnt--) {
            nums.push_back(0);
        }
    }
} solution;

int main() {
    cout << "moveZeros" << endl << "---------------" << endl;
    int n;
    cin >> n;
    getchar();
    vector<int> digits;
    for (int i = 0; i < n; i ++) {
        char tmp;
        cin >> tmp;
        digits.push_back(tmp - '0');
    }
    solution.moveZeros(digits);
    for (auto e : digits) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}