class Solution {
public:
    int find(int row,int col, vector<vector<int>> &grid,vector<vector<int>> &dp)
    {
        if(row<0||col<0||grid[row][col]==1)
            return 0;
        if(row==0&&col==0)
            return 1;
        if(dp[row][col]!=-1)
            return dp[row][col];
        
        int up=find(row-1,col,grid,dp);
        int left=find(row,col-1,grid,dp);
        
        dp[row][col]=up+left;
        return dp[row][col];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     
        int row=obstacleGrid.size();
        int col=obstacleGrid[0].size();
        vector<vector<int>> dp(row,vector<int>(col,-1));
        int c=find(row-1,col-1,obstacleGrid,dp);
        return c;
    }
};