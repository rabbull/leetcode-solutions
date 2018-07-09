#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    string s;
    cin >> s;
    Solution solution;
    cout << solution.firstUniqChar(s) << endl;
    return 0;
}