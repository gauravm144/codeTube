class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        vector<vector<int>> vtk;
        int n1=rowSum.size();
        int n2=colSum.size();
        for(int i=0;i<n1;i++)
        {
         vector<int> tmp(n2,0);
            vtk.push_back(tmp);
        }
        int i=0,j=0;
        while(i<n1&&j<n2)
        {
            if(rowSum[i]<colSum[j])
            {
                vtk[i][j]=rowSum[i];
                colSum[j]-=rowSum[i];
                rowSum[i]=0;
                i++;
            }
            else if(rowSum[i]>colSum[j])
            {
                vtk[i][j]=colSum[j];
                rowSum[i]-=colSum[j];
                colSum[j]=0;
                j++;
            }
            else if(rowSum[i]==colSum[j])
            {
                vtk[i][j]=rowSum[i];
                colSum[j]=0;
                rowSum[i]=0;
                i++;
                j++;
            }
        }
        return vtk;
    }
};