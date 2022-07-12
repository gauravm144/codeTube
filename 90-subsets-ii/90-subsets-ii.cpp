class Solution {
public:
     void find(int idx,vector<int> &nums,vector<vector<int>> &ans,vector<int> &res)
     {
         ans.push_back(res);
         for(int i=idx;i<nums.size();i++)
         {
             if(i!=idx&&nums[i]==nums[i-1])
                 continue;
             
             res.push_back(nums[i]);
             find(i+1,nums,ans,res);
             res.pop_back();
         }
     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> ans;
         vector<int> res;
         find(0,nums,ans,res);
         return ans;
    }
};