#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> & digits) {
        vector<int> ans = vector<int>(digits);
        bool carry = true;
        for (int i = ans.size() - 1; i >= 0; i --) {
            if (carry) {
                if (ans.at((unsigned) i) == 9) {
                    ans.at((unsigned) i) = 0;
                } else {
                    ans.at((unsigned) i) += 1;
                    carry = false;
                }
            } else {
                break;
            }
        }
        if (carry) {
            ans.insert(ans.begin(), 1);
        }
        return ans;
    }
} solution;

int main() {
    cout << "plus one" << endl << "---------------" << endl;
    int n;
    cin >> n;
    getchar();
    vector<int> digits;
    for (int i = 0; i < n; i ++) {
        char tmp;
        cin >> tmp;
        digits.push_back(tmp - '0');
    }
    vector<int> ans = solution.plusOne(digits);
    for (auto e : ans) {
        cout << e << " ";
    }
    cout << endl;
//    digits.insert(digits.begin(), 1);
//    for (auto e : digits) {
//        cout << e << " ";
//    }
    return 0;
}