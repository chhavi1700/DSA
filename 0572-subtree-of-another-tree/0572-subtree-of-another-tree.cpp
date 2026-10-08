class Solution {
public:
    bool same(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL)
            return true;

        if(root == NULL || subRoot == NULL)
            return false;

        if(root->val != subRoot->val)
            return false;

        bool l = same(root->left, subRoot->left);
        bool r = same(root->right, subRoot->right);

        return l && r;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL)
            return false;

        if(same(root, subRoot))
            return true;

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};