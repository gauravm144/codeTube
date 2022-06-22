class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length(),n=t.length();
        int i=0,j=0;
        for(;i<m&&j<n;)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            j++;
        }
        if(i==m)
            return true;
        else 
            return false;
            
    }
};