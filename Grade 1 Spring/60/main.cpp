#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int factorial(int x) {
        int ans = 1;
        for (int i = 1; i <= x; i++) {
            ans *= i;
        }
        return ans;
    }

public:
    string getPermutation(int n, int k) {
        vector<char> ans;
        vector<int> seq;
        for (int i = 1; i <= n; i ++){
            seq.push_back(i);
        }
        for (unsigned i = 0; i < n; i ++) {
            auto tmp = (char) seq.at((unsigned) k / factorial(n - i - 1)) + '0';
            ans.push_back(tmp);
            seq.erase(seq.begin() + k / factorial(n - i - 1));
        }
        string str;
        for (char e : ans) {
            str.push_back(e);
        }
        return str;
    }
} solution;

int main() {
    int n, k;
    cin >> n >> k;
    string ans = solution.getPermutation(n, k);
    return 0;
}