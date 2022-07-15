class Solution {
public:
    int find(vector<vector<int>> &grid,int row,int col,int n,int m,vector<vector<bool>> &visited)
    {
        
       if(row<0||col<0||row>=n||col>=m||grid[row][col]==0||visited[row][col]==true)
           return 0;
       
        if(row>=0&&col>=0&&row<n&&col<m&&visited[row][col]==false&&grid[row][col]==1)
       {
       visited[row][col]=true;
     int a=find(grid,row-1,col,n,m,visited);
       int b=find(grid,row,col-1,n,m,visited);
       int c=find(grid,row+1,col,n,m,visited);
       int d=find(grid,row,col+1,n,m,visited);
       // visited[row][col]=false;
        return 1+a+b+c+d;
       }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int mx=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    mx=max(mx,find(grid,i,j,n,m,visited));
                }
            }
        }
        return mx;
    }
};