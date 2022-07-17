class Solution {
public:

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        dp[0]=nums[0];
        int s1=0,s2=0;
        for(int i=1;i<nums.size();i++)
        {
            s1=dp[i-1];
            s2=nums[i];
            if(i>1)
            s2+=dp[i-2];
            dp[i]=max(s1,s2);
        }
        return dp[nums.size()-1];
    }
};