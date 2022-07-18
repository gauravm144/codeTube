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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0)
        {
            int size=q.size();
            vector<int> ans;
            for(int i=0;i<size;i++)
            {
            TreeNode *tmp=q.front();
            q.pop();
            if(tmp->left!=NULL)
                q.push(tmp->left);
            if(tmp->right!=NULL)
                q.push(tmp->right);
            ans.push_back(tmp->val);
            }
            
            res.push_back(ans);
        }
        return res;
    }
};