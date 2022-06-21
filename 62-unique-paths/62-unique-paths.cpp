class Solution {
public:
    int findPath(int i,int j,int m,int n,vector<vector<int>> &vtk)
    {
       
      
        if(i>=m||j>=n)
            return 0;
        else if(vtk[i][j]!=-1)
            return vtk[i][j];
        else if(i==m-1&&j==n-1)
            return 1;
       int a=findPath(i+1,j,m,n,vtk);
        int b=findPath(i,j+1,m,n,vtk);
        int c=a+b;
        vtk[i][j]=c;
        return c;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> vtk(m,vector<int>(n,-1));
        
        int x=findPath(0,0,m,n,vtk); 
        return x;
    }
};