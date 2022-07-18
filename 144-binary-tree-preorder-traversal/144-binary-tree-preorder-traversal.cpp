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
    void POT(TreeNode* root,vector<int> &vtk)
    {
        if(root==NULL)
            return;
        vtk.push_back(root->val);
        POT(root->left,vtk);
        POT(root->right,vtk);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vtk;
        POT(root,vtk);
        return vtk;
    }
};