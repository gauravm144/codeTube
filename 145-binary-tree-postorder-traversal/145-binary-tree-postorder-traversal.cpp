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
    void POST(TreeNode* root,vector<int> &vtk)
    {
        if(root==NULL)
            return;
        POST(root->left,vtk);
        POST(root->right,vtk);
        vtk.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vtk;
        POST(root,vtk);
        return vtk;
    }
};