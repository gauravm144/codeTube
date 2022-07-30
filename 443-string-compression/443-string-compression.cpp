class Solution {
public:
    int compress(vector<char>& chars) {
     
        string s="";
        s+=chars[0];
        int c=1;
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]!=s[s.size()-1])
            {
                if(c!=1)
                s+=to_string(c);
                s+=chars[i];
                c=1;
            }
            else
                c++;
        }
        if(c!=1)
            s+=to_string(c);
        vector<char> ans;
        for(auto s1:s)
            ans.push_back(s1);
        chars=ans;
        return s.size();
        
    }
};