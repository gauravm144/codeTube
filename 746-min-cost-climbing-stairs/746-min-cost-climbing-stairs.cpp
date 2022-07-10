class Solution {
public:
    int find(int idx,vector<int>& cost,vector<int> &dp)
    {
        if(idx==cost.size()-1)
            return cost[idx];
        if(idx==cost.size())
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        
        int take1=cost[idx]+find(idx+1,cost,dp);
        int take2=cost[idx]+find(idx+2,cost,dp);
        
        return dp[idx]=min(take1,take2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp1(cost.size(),-1),dp2(cost.size(),-1);
        int c1=find(0,cost,dp1);
        int c2=find(1,cost,dp2);
        return min(c1,c2);
        
    }
};