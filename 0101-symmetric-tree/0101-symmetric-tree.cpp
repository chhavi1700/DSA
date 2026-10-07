/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool fun(TreeNode* l,TreeNode * r){
        if(l==NULL&r==NULL) return true;
        if(!l||!r||l->val!=r->val) return false;
        if(fun(l->left,r->right)&&fun(l->right,r->left)) return true;
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        TreeNode* l=root->left;
        TreeNode* r=root->right;
        
        return fun(l,r);
    }
};