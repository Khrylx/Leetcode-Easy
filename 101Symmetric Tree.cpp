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

bool finded = false;

bool isSymmetricHelper(TreeNode* p,TreeNode* q)
{
    if (!p && !q) {
        return true;
    }
    else if((!p && q) || (p && !q)){
        return false;
    }
    else if(p->val != q->val)
    {
        return false;
    }
    else{
        return isSymmetricHelper(p->left, q->right) && isSymmetricHelper(p->right, q->left);
    }
    
    return true;

}

bool isSymmetric(TreeNode* root) {
    if(!root)
        return true;
    else
        return isSymmetricHelper(root->left, root->right);
}


int main(){
    
    TreeNode* root = initTreeRoot(5);
   // TreeNode* n1 = addLeftChild(root, 2);
    //TreeNode* n2 = addRightChild(root, 1);

    
    cout << isSymmetric(root) <<endl;
    
    destroyTree(root);
    return 1;
}