class Solution {
public:
    string sortSentence(string s) {
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.at(i);
            if(ch-'0'<=9&&ch-'0'>=0)
                if(ch-'0'>max)
                max=ch-'0';
        }
        string ans="";
        // cout<<max;
        vector<string> vtk(max);
         for(int i=0;i<s.length();i++)
        {
             char ch=s.at(i);
             if(ch==' ')
                 continue;
             
             ans+=s[i];
            if(ch-'0'<=9&&ch-'0'>=0)
            {
                // cout<<ans<<"  ";
                vtk[ch-'0'-1]=ans.substr(0,ans.size()-1);
                ans="";
            }   
        }
        ans="";
        for(int i=0;i<max;i++)
        {
                if(i==max-1)
               ans+=vtk[i]; 
            else
                ans+=vtk[i]+" ";
        }
        return ans;
        
        
    }
};