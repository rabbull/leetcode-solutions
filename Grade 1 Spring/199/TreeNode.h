#ifndef _199_TREENODE_H_
#define _199_TREENODE_H_

struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

#endif