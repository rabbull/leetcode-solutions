#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int width = 9;
        // line
        for (unsigned i = 0; i < 9; i ++) {
            bool book[10] = {false};
            for (unsigned j = 0; j < 9; j ++) {
                int tmp = board.at(j).at(i) - '0';
                if (tmp >= 0 && tmp <= 9) {
                    if (book[tmp]) {
                        return false;
                    } else {
                        book[tmp] = true;
                    }
                }
            }
        }

        // column
        for (unsigned i = 0; i < 9; i ++) {
            bool book[10] = {false};
            for (unsigned j = 0; j < 9; j ++) {
                int tmp = board.at(i).at(j) - '0';
                if (tmp >= 0 && tmp <= 9) {
                    if (book[tmp]) {
                        return false;
                    } else {
                        book[tmp] = true;
                    }
                }
            }
        }

        // block
        for (unsigned x = 0; x < 3; x ++) {
            for (unsigned y = 0; y < 3; y ++) {
                bool book[10] = {false};
                for (unsigned i = 0; i < 3; i ++) {
                    for (unsigned j = 0; j < 3; j ++) {
                        int tmp = board.at(3 * x + i).at(3 * y + j) - '0';
                        if (tmp >= 0 && tmp <= 9) {
                            if (book[tmp]) {
                                return false;
                            } else {
                                book[tmp] = true;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
} solution;

int main() {
    cout << "is valid sudoku" << endl << "---------------" << endl;
    vector<vector<char>> board;
    int width = 9;
    for (int i = 0; i < width; i ++) {
        board.emplace_back(vector<char>());
        for (int j = 0; j < width; j ++) {
            char tmp;
            cin >> tmp;
            board.back().push_back(tmp);
        }
    }
    cout << (solution.isValidSudoku(board) ? "TRUE" : "FALSE") << endl;
    return 0;
}
