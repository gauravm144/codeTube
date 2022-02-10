class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> vtk(s.length()+1);
        int high=s.length();
        int low=0,i=0;;
        for(;i<s.length();i++)
        {
            if(s[i]=='D')
            {
                vtk[i]=high;
            high--;
            }
            else
            {
                vtk[i]=low;
            low++;
            }
        }
        vtk[i]=low;
        return vtk;
    }
};