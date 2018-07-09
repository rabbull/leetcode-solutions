#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set <char> jewel;
        for (char c : J) {
            jewel.insert(c);
        }
        int cnt = 0;
        for (char c : S) {
            for (char j : jewel) {
                if (c == j) {
                    cnt ++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    string J, S;
    cin >> J >> S;
    cout << s.numJewelsInStones(J, S) << endl;
    return 0;
}