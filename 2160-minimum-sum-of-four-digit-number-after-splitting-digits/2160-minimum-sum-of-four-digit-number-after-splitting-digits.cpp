class Solution {
public:
    int minimumSum(int num) {
        vector<int> vtk;
        while(num)
        {
            vtk.push_back(num%10);
            num=num/10;
        }
        sort(vtk.begin(), vtk.end());
        for(int i=0;i<vtk.size();i++)
        {
            cout<<vtk[i]<<"  ";
        }
        return ((vtk[0]*10)+vtk[3])+((vtk[1]*10)+vtk[2]);
        
    }
};