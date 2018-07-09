//
// Created by Karl on 2018/6/14.
//

#include "Solution.h"
#include <queue>

void Solution::connect(TreeLinkNode *root) {
    std::queue<TreeLinkNode *> rec;
    if (root != nullptr) {
        rec.push(root);
    }
    int size;
    while ((size = rec.size()) != 0) {
        TreeLinkNode *prev = nullptr;
        while (size--) {
            auto curr = rec.front();
            if (prev != nullptr) {
                prev->next = curr;
            }
            prev = curr;

            if (curr->left != nullptr) {
                rec.push(curr->left);
            }
            if (curr->right != nullptr) {
                rec.push(curr->right);
            }
            rec.pop();
        }
        if (prev != nullptr) {
            prev->next = nullptr;
        }
    }
}
