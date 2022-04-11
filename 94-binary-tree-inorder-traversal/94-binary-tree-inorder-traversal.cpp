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
    void IOT(TreeNode* root,vector<int> &vtk)
    {
        if(root==NULL)
            return;
        IOT(root->left,vtk);
        vtk.push_back(root->val);
        IOT(root->right,vtk);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vtk;
        IOT(root,vtk);
        return vtk;
        
    }
};