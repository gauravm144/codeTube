class Solution {
public:
    void find(vector<int>&nums,vector<int>&res,vector<vector<int>>&ans,vector<bool>&store)
    {
        if(res.size()==nums.size())
        {
            ans.push_back(res);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(store[i]==false)
            {
            res.push_back(nums[i]);
            store[i]=true;
            find(nums,res,ans,store);
            res.pop_back();
            store[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> res;
        vector<vector<int>> ans;
        vector<bool> store(nums.size(),false);
        find(nums,res,ans,store);
        return ans;
        
    }
};