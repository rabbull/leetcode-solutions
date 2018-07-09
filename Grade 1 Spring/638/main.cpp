#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
private:
    struct Ans {
        vector<int> needs;
        int cost;

        Ans(vector<int> v, int c) {
            needs = v;
            c = cost;
        }
    };

    public:
    int shoppingOffers(vector<int> &price, vector<vector<int>> &special, vector<int> &needs) {
        vector<Ans> rec;
        rec.emplace_back(Ans(vector<int>(), 0));
        if
    }
} solution;

/*
class Solution {
private:
    template <typename T>
    class Vec : public vector<T> {
    public:
        Vec(){
            Vec(vector<T>());
        }

        explicit Vec(vector<T> v) {
            int len = v.size();
            for (unsigned i = 0; i < len; i ++) {
                this->push_back(v.at(i));
            }
        }

        Vec operator + (const Vec& b) {
            T tmp;
            Vec<T> ans;
            int len = this->size();
            for (unsigned int i = 0; i < len; i ++) {
                tmp = this->at(i) + b.at(i);
                ans.push_back(ans);
            }
            return ans;
        }

        Vec operator - (const Vec& b) {
            T tmp;
            Vec<T> ans;
            int len = this->size();
            for (unsigned int i = 0; i < len; i ++) {
                tmp = this->at(i) - b.at(i);
                ans.push_back(tmp);
            }
            return ans;
        }
    };

    int cost(vector<int>& price, vector<vector<int>>& special, Vec<int> needs, int n) {
        if (n < 0) {
            int c = 0;
            int len = needs.size();
            for (unsigned int i = 0; i < len; i ++) {
                c += needs.at(i) * price.at(i);
            }
            return c;
        }
        else {
            Vec<int> curr = Vec<int>(special.at((unsigned) n));
            unsigned int len = needs.size();
            bool flag = false;
            for (unsigned int i = 0; i < len; i ++) {
                if (needs.at(i) - curr.at(i) < 0) {
                    flag = true;
                }
            }

            if (flag) {
                return cost(price, special, needs, n - 1);
            } else {
                return min(cost(price, special, needs, n - 1),
                           cost(price, special, needs - curr, n - 1) + curr.at(len)
                );
            }
        }
    }

public:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        return cost(price, special, Vec<int>(needs), special.size() - 1);
    }
} solution;
*/

int main() {
    int priceSize;
    cin >> priceSize;
    int specialSize;
    cin >> specialSize;
    vector<int> price;
    for (int i = 0; i < priceSize; i ++) {
        int tmp;
        cin >> tmp;
        price.push_back(tmp);
    }
    vector<vector<int>> special;
    for (int i = 0; i < specialSize; i ++) {
        special.emplace_back(vector<int>());
        for (int j = 0; j < priceSize + 1; j ++) {
            int tmp;
            cin >> tmp;
            special.back().push_back(tmp);
        }
    }
    vector<int> needs;
    for (int i = 0; i < priceSize; i ++) {
        int tmp;
        cin >> tmp;
        needs.push_back(tmp);
    }

    cout << solution.shoppingOffers(price, special, needs) << endl;

    return 0;
}