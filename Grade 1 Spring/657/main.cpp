#include <iostream>
#include <stack>

using namespace std;

class Solution {
    bool judgeCircle(string moves) {
        pair<int, int> rec = pair<int, int>(0, 0);
        for (char c : moves) {
            switch (c) {
                case 'U':
                    rec.first += 1;
                    break;
                case 'D':
                     rec.first -= 1;
                     break;
                case 'L':
                    rec.second += 1;
                    break;
                case 'R':
                    rec.second -= 1;
                    break;
                default:
                    cout << "ERROR" << endl;
                    return false;
            }
        }
        return rec.first == 0 && rec.second == 0;
    }
} solution;

int main() {
    return 0;
}