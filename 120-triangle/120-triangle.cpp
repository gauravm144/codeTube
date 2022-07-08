class Solution {
public:
    int find(int row,int col,vector<vector<int>> &tri,vector<vector<int>> &dp)
    {
        if((row==tri.size()-1)&&col==(tri[row].size()-1))
            return tri[row][col];
        if(row>=tri.size()||col>=tri[row].size())
        {
            return 0;
        }
        if(dp[row][col]!=-1)
            return dp[row][col];
        
        int down=tri[row][col]+find(row+1,col,tri,dp);
        int downn=tri[row][col]+find(row+1,col+1,tri,dp);
        return dp[row][col]=min(down,downn);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp;
        for(int i=1;i<=triangle.size();i++)
        {
            vector<int> tmp(i,-1);
            dp.push_back(tmp);
        }
        return find(0,0,triangle,dp);
    }
};