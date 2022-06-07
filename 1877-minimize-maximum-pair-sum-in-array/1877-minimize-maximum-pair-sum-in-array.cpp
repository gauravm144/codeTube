class Solution {
public:
    int minPairSum(vector<int>& vtk) {
        sort(vtk.begin(),vtk.end());
        int sum=0;
        int n=vtk.size();
        for(int i=0;i<(n/2);i++)
        {
            if((vtk[i]+vtk[n-i-1])>sum)
                sum=vtk[i]+vtk[n-i-1];
        }
        return sum;
    }
};