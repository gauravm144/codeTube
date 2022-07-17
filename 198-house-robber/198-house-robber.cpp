class Solution {
public:
    int find(int idx,vector<int>&nums,int n,vector<int>&dp)
    {
        if(idx==n-1)
        {
            return nums[idx];
        }
        if(idx>=n)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        
    int s1=nums[idx]+find(idx+2,nums,n,dp);
    int s2=0+find(idx+1,nums,n,dp);
        
    return dp[idx]=max(s1,s2);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return find(0,nums,nums.size(),dp);
    }
};