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
    TreeNode *ans=NULL;
    void find(TreeNode* root, int val)
    {
        if(root==NULL)
            return;
        if(root->val==val)
        {
            ans=root;
            return;
        }
        
        find(root->left,val);
        find(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
      find(root, val);
        return ans;
    }
};