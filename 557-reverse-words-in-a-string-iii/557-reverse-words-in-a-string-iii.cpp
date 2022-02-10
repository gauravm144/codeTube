class Solution {
public:
    string reverseWords(string s) {
        vector<string> vtk;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            res+=s[i];
            if(s[i]==' ')
            {
                vtk.push_back(res);
                res="";
                continue;
            }
            else if(i==s.length()-1)
            {
               vtk.push_back(res);
                res="";
                continue;
            }
            
        }
        s="";
        for(int i=0;i<vtk.size();i++)
        {
            for(int j=vtk[i].length()-1;j>=0;j--)
            {
                if(vtk[i][j]==' ')
                    continue;
             s+=vtk[i][j];   
            }
            if(i==vtk.size()-1){}
            else
            s+=" ";
            cout<<vtk[i]<<vtk[i].length()<<endl;
        }
            
        return s;
    }
};