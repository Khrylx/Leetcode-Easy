//
//  main.cpp
//  Leetcode
//
//  Created by Eric on 15/5/14.
//  Copyright (c) 2015年 Eric. All rights reserved.
//

#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* initTreeRoot(int val)
{
    return new TreeNode(val);
}

TreeNode* addLeftChild(TreeNode* node, int val)
{
    TreeNode* lChild = new TreeNode(val);
    node->left = lChild;
    return lChild;
}

TreeNode* addRightChild(TreeNode* node, int val)
{
    TreeNode* rChild = new TreeNode(val);
    node->right = rChild;
    return rChild;
}

void destroyTree(TreeNode* root)
{
    if (root->left) {
        destroyTree(root->left);
    }
    if (root->right) {
        destroyTree(root->right);
    }
    
    delete root;
    
}

void inorderPrint(TreeNode* root)
{
    if (root->left) {
        inorderPrint(root->left);
    }
    
    cout << root->val <<" ";
    
    if (root->right) {
        inorderPrint(root->right);
    }
}

bool isBalancedHelper(TreeNode* root,int& depth)
{
    if (!root) {
        depth = 0;
        return true;
    }
    
    int d1,d2 = 0;
    
    if (!(isBalancedHelper(root->left,d1) && isBalancedHelper(root->right,d2))) {
        return false;
    }
    
    depth = max(d1,d2)+1;
    
    if (abs(d1-d2) <= 1) {
        return true;
    }
    
    return false;
}

bool isBalanced(TreeNode* root)
{
    int depth;
    return isBalancedHelper(root,depth);
}

int main(){
    
    TreeNode* root = initTreeRoot(1);
    TreeNode* n1 = addLeftChild(root, 2);
    TreeNode* n2 = addRightChild(root, 3);
//    TreeNode* n3 = addLeftChild(n1, 4);
//    TreeNode* n4 = addRightChild(n1, 5);
//    TreeNode* n5 = addLeftChild(n2, 8);
//    TreeNode* n6 = addRightChild(n4, 7);
    
    cout << isBalanced(root) <<endl;
    
    destroyTree(root);
    return 1;
}
