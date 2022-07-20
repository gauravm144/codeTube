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
    void find(TreeNode*t1,TreeNode*t2,bool &check)
    {
        if(t1==NULL&&t2!=NULL)
        {
            check=false;
            return;
        }
         if(t1!=NULL&&t2==NULL)
        {
            check=false;
            return;
        }
        if(t1==NULL&&t2==NULL)
            return;
        if((t1->val)!=(t2->val))
        {
            check=false;
            return;
        }
        find(t1->left,t2->right,check);
        find(t1->right,t2->left,check);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        
        TreeNode *t1=root->left;
        TreeNode *t2=root->right;
        if(t1==NULL&&t2==NULL)
            return true;
        if(t1==NULL||t2==NULL)
            return false;
        bool check=true;
        find(t1,t2,check);
        return check;
    }
};