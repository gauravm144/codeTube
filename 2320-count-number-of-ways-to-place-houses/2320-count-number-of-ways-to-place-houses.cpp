class Solution {
public:
    int mod=1e9+7;
    int countHousePlacements(int n) 
    {         
     vector<long> dp(n+1,0);
     dp[0]=1;
     dp[1]=2;
     for(int i=2;i<=n;i++)
     {
         dp[i]=(dp[i-1]+dp[i-2])%mod;
     }
    long long c=dp[n]*dp[n];
        c=c%mod;
    return (int)c;
    }
};