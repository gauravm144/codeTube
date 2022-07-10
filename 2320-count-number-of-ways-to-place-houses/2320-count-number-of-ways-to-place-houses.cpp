class Solution {
public:
    int mod=1e9+7;
    int find(int n,vector<int> &dp)
    {
        if(n==0||n==-1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        
        long long a=find(n-1,dp);
        long long b=find(n-2,dp);
        
        return dp[n]=(a+b)%mod;
    }
    int countHousePlacements(int n) {
        vector<int> dp(n+1,-1);
        long long c=find(n,dp);
        c=c*c;
        c=c%mod;
        return (int)c;
    }
    
};