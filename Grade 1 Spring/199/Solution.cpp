//
// Created by Karl on 2018/6/14.
//

#include "Solution.h"
#include <queue>

std::vector<int> Solution::rightSideView(TreeNode *root) {
    std::vector<int> ans;
    std::queue<TreeNode *> rec;

    if (root == nullptr) {
        return ans;
    }

    rec.push(root);
    int size;
    while ((size = rec.size()) != 0) {
        while (size --) {
            auto curr = rec.front();
            rec.pop();

            if (curr->left != nullptr) {
                rec.push(curr->left);
            }
            if (curr->right != nullptr) {
                rec.push(curr->left);
            }
            if (size == 0) {
                ans.push_back(curr->val);
            }
        }
    }
}
