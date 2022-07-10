class Solution {
public:
    int find(int n,vector<int> &dp)
    {
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
        
    int a=find(n-1,dp);
    int b=find(n-2,dp);
    return dp[n]=a+b;    
    }
    int climbStairs(int n) {
    vector<int> dp(n+1,-1);
     return find(n,dp);   
    }
};