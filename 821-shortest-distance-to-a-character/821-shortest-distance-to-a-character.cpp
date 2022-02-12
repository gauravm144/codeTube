class Solution {
public:
    void op(vector<int> &vtk)
    {
          for(int i=0;i<vtk.size();i++)
            cout<<vtk[i]<<" ";
        cout<<endl;
    }
    vector<int> shortestToChar(string s, char c) {
        vector vtk(s.length(),0);
        int pos=0;
        
        for(int i=s.length()-1;i>=0;i--)
            if(s[i]==c)
            {
                pos=i;
            }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                pos=i; 
                continue;            
            }
            vtk[i]=abs(pos-i);
        }
        // op(vtk);
        
          for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==c)
            {
                pos=i; 
                continue;            
            }
            vtk[i]=min(vtk[i],abs(pos-i));
        }
        // op(vtk);
        
        // cout<<endl;
        
        
        return vtk;
    }
};