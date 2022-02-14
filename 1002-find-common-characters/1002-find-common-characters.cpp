class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<char> h1(26,0),h2(26,0);
        for(int i=0;i<words[0].size();i++)
            h1[words[0][i]-'a']+=1;
        
        for(int i=1;i<words.size();i++)
        {
            for(auto c:words[i])
                h2[c-'a']+=1;
            for(int k=0;k<26;k++)
            {
                h1[k]=min(h2[k],h1[k]);
                h2[k]=0;
            }
        }
        vector<string> st;
        
        for(int k=0;k<26;k++)
        {
            if(h1[k]>0)
            {
                int count=h1[k];
                while(count)
                {
            char ch=k+'a';
            string ss="";
                    ss+=ch;
             st.push_back(ss); 
                count--;
                }
            }
        }
        
        return st;
    }
};