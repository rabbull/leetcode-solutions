#include <iostream>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:
    TreeNode * makeupNewTree(vector<int> &num, vector<int>::iterator low, vector<int>::iterator high) {
        if (low == high) {
            return nullptr;
        }
        auto it = low;
        auto maxIt = low;
        while (++it != high) {
            if (*it > *maxIt) {
                maxIt = it;
            }
        }
        auto * node = new TreeNode(*maxIt);
        node->left = makeupNewTree(num, low, maxIt);
        node->right = makeupNewTree(num, maxIt + 1, high);
        return node;
    }

public:
    TreeNode * constructMaximumBinaryTree (vector<int> nums) {
        return makeupNewTree(nums, nums.begin(), nums.end());
    }
} solution;

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
//    trimLeftTrailingSpaces(input);
//    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

string treeNodeToString(TreeNode* root) {
    if (root == nullptr) {
        return "[]";
    }

    string output;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node == nullptr) {
            output += "null, ";
            continue;
        }

        output += to_string(node->val) + ", ";
        q.push(node->left);
        q.push(node->right);
    }
    return "[" + output.substr(0, output.length() - 2) + "]";
}

int main() {
    cout << "construct maximum binary tree" << endl << "---------------" << endl;
    string input;
    cin >> input;
    cout << treeNodeToString(solution.constructMaximumBinaryTree(stringToIntegerVector(input))) << endl;
    return 0;
}