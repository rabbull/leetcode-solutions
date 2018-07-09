#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> A;
    int tmp = 0;
    while (tmp != -1) {
        cin >> tmp;
        A.push_back(tmp);
    }
    for (auto e : A) {
        cout << e << " ";
    }
    cout << endl;
    cout << endl << solution.peakIndexInMountainArray(A) << endl;
    return 0;
}