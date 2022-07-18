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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        stack<TreeNode*> stk;
        stk.push(root);
        while(stk.size()>0)
        {
            TreeNode *tmp=stk.top();
            stk.pop();
            res.push_back(tmp->val);
            if(tmp->left!=NULL)
                stk.push(tmp->left);
            if(tmp->right!=NULL)
                stk.push(tmp->right);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};