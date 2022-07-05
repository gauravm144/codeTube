class Solution {
public:
    int fib(int n) {
        if(n==0)
        return 0;
        vector<int> vtk(n+1,0);
        vtk[0]=0,vtk[1]=1;
        for(int i=2;i<=n;i++)
            vtk[i]=vtk[i-1]+vtk[i-2];
        return vtk[n];
        
    }
};