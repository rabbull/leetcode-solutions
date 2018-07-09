#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    void swap4(int &p, int &q, int &r, int &s) {
        int tmp = p;
        p = q;
        q = r;
        r = s;
        s = tmp;
    }

public:
    void rotate(vector<vector<int>> &matrix) {
        unsigned len = matrix.size();
        for (unsigned t = 0; t < len / 2; t ++) {
            for (int i = 0; i < len - 1 - 2 * t; i++) {
                swap4(matrix.at(t).at(t + i),
                      matrix.at(len - 1 - i - t).at(t),
                      matrix.at(len - 1 - t).at(len - 1 - i - t),
                      matrix.at(i + t).at(len - 1 - t));
            }
        }
    }
} solution;

int main() {
    cout << "rotate matrix" << endl << "---------------" << endl;
    int size;
    cin >> size;
    vector<vector<int>> mat;
    for (int i = 0; i < size; i ++) {
        mat.emplace_back(vector<int>());
        for (int j = 0; j < size; j ++) {
            int tmp;
            cin >> tmp;
            mat.back().push_back(tmp);
        }
    }
    solution.rotate(mat);
    for (unsigned i = 0; i < size; i ++) {
        for (unsigned j = 0; j < size; j ++) {
            cout << mat.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}