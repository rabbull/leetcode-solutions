#include<iostream>

using namespace std;

struct TreeNode {
    TreeNode * left;
    TreeNode * right;
    int val;
};

class Solution {
public:
    TreeNode * pruneTree (TreeNode * root) {
        if (root->left != nullptr) {
            root->left = pruneTree(root->left);
        }
        if (root->right != nullptr) {
            root->right = pruneTree(root->right);
        }
        if (root->left == root->right && root->left == nullptr) {
            if (root->val == 0) {
                free(root);
                return nullptr;
            }
        }
        return root;
    }
} solution;

int main() {
    return 0;
}
