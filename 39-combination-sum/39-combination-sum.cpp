class Solution {
public:
    void find(int i,int n,int target,vector<int> &A,vector<int>&res,vector<vector<int>> &ans)
    {   if(target<0)
        return;
        if(i==n)
        {
            if(target==0)
                ans.push_back(res);
            return;
        }
       
        res.push_back(A[i]);
        find(i,n,target-A[i],A,res,ans);
        res.pop_back();
        find(i+1,n,target,A,res,ans);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& A, int target) {
        vector<int> res;
        vector<vector<int>> ans;
        find(0,A.size(),target,A,res,ans);
        return ans;
    }
};