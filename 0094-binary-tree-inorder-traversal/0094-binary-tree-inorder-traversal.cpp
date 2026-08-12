class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr != NULL || !st.empty()) {
            while (curr != NULL) {
                st.push(curr);            // Go left as far as possible
                curr = curr->left;
            }

            curr = st.top();
            st.pop();

            ans.push_back(curr->val);     // Visit node

            curr = curr->right;           // Now go right
        }

        return ans;
    }
};