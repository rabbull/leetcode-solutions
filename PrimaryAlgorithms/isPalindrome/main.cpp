#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    string s;
//    cin >> s;
    s = "a man, a plan, a canal: Panama.";
    cout << (solution.isPalindrome(s) ? "true" : "false") << endl;
    return 0;
}