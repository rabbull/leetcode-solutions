#include <iostream>
#include <vector>
#include <ctime>
#include <sys/time.h>

using namespace std;

class Solution {
private:
    int sum(vector<vector<vector<int>>> book, vector<pair<int, int>> dat, int first, int second, int n) {
        if (n < 0) {
//            cout << "# 3" << endl << "## " << first << " " << second << " " << n << endl;
//            system("PAUSE");
            return 0;
        } else {
            pair<int, int> curr = dat.at((unsigned) n);
            if (first - curr.first >= 0 && second - curr.second >= 0) {
//                cout << "# 1" << endl << "## " << first << " " << second << " " << n << endl;
//                system("PAUSE");
                if (book[first][second][n] == -1) {
                    book[first][second][n] = sum(book, dat, first, second, n - 1);
                }
                if (book[first - curr.first][second - curr.second][n] == -1) {
                    book[first - curr.first][second - curr.second][n] = sum(book, dat, first - curr.first,
                                                                            second - curr.second, n - 1);
                }
                return max(
                        book[first][second][n], // not select
                        book[first - curr.first][second - curr.second][n] + 1 // select
                );
            } else {
//                cout << "# 2" << endl;
//                system("PAUSE");
                if (book[first][second][n] == -1) {
                    book[first][second][n] = sum(book, dat, first, second, n - 1);
                }
                return book[first][second][n]; // couldn't select
            }
        }
    }

public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> book;
        for (int i = 0; i <= m; i ++) {
            book.emplace_back(vector<vector<int>>());
            for (int j = 0; j <= n; j ++) {
                book.back().emplace_back(vector<int>());
                for (int k = 0; k <= strs.size(); k ++) {
                    book.back().back().push_back(-1);
                }
            }
        }

        vector<pair<int, int>> v;
        for (string s : strs) {
            int cnt0 = 0;
            int cnt1 = 0;
            for (char c : s) {
                if (c == '0') {
                    cnt0++;
                } else if (c == '1') {
                    cnt1++;
                }
            }
            v.emplace_back(pair<int, int> (cnt0, cnt1));
        }

        cout << "made it to sum" << endl;
        return sum(book, v, m, n, v.size() - 1);
    }
} solution;

int main() {
    int m, n;
    cin >> n;
    vector<string> strs;
    for (int i = 0; i < n; i ++) {
        string tmp;
        cin >> tmp;
        strs.push_back(tmp);
    }
    cin >> m >> n;
    long long start, end, fend;
    timeval t = {0};
    gettimeofday(&t, nullptr);
    start = t.tv_usec;
    cout << solution.findMaxForm(strs, m, n) << endl;
    gettimeofday(&t, nullptr);
    end = t.tv_usec;
    gettimeofday(&t, nullptr);
    fend = t.tv_usec;
    cout << 2 * end - start - fend << endl;
    return 0;
}