class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        for(;i<row;i++)
        {
            if(matrix[i][col-1]>=target)
                break;
            if(i==row-1)
            {
                return false;
            }
        }
        for(int j=0;j<col;j++)
            if(matrix[i][j]==target)
                return true;
        return false;
    }
};