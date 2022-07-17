class Solution {
public:
    int find(vector<int>&nums,int n,vector<int>&dp)
    {
        if(n==0)
        {
            return nums[0];
        }
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        
    int s1=nums[n]+find(nums,n-2,dp);
    int s2=0+find(nums,n-1,dp);
        
    return dp[n]=max(s1,s2);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return find(nums,nums.size()-1,dp);
    }
};