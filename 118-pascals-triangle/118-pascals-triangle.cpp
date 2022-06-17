class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vtk(numRows);
        for(int i=0;i<numRows;i++)
        {
            vtk[i].resize(i+1);
            vtk[i][0]=vtk[i][i]=1;
            for(int j=1;j<i;j++)
            {
                vtk[i][j]=vtk[i-1][j-1]+vtk[i-1][j];
            }
        }
        return vtk;
    }
};