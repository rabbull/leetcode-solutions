#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {

private:
    struct node {
        node *father;
    };

    bool isRoot(node * n) {
        return n->father == nullptr;
    }

    node * findRoot(node * n) {
        while (!isRoot(n)) {
            n = n->father;
        }
        return n;
    }

public:
    int findCircleNum(vector<vector<int>> &M) {
        int n = M.size();
        auto stu = (node **) malloc(sizeof(node *) * n);
        for (int i = 0; i < n; i ++) {
            stu[i] = (node *) malloc (sizeof (node));
            stu[i]->father = nullptr;
        }

        for (unsigned int i = 0; i < n; i++) {
            for (unsigned int j = 0; j < n; j++) {
                if (M.at(i).at(j) == 1) {
                    if (findRoot(stu[i]) != findRoot(stu[j])) {
                        findRoot(stu[j])->father = findRoot(stu[i]);
                    }
                }
            }
        }

        vector<node *> rootSet;
        for (int i = 0; i < n; i ++) {
            for (node * p : rootSet) {
                if (p == findRoot(stu[i])) {
                    goto nextLoop;
                }
            }
            rootSet.push_back(findRoot(stu[i]));
            nextLoop: continue;
        }

        return rootSet.size();
    }

} solution;


int main() {
    int n;
    cin >> n;

    vector<vector<int>> M;
    for (int i = 0; i < n; i ++) {
        M.emplace_back(vector<int>());
        for (int j = 0; j < n; j ++) {
            int tmp;
            cin >> tmp;
            M.back().push_back(tmp);
        }
    }

    cout << solution.findCircleNum(M) << endl;
    return 0;
}