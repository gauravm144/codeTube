class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        vector<string> stk;
        int s_length=s.length();
        int d_length=dictionary.size();
        for(int i=0;i<d_length;i++)
        {
            int s_pos=0,d_pos=0;
            int d_i_len=dictionary[i].length();
            while(s_pos<s_length&&d_pos<d_i_len)
            {
                if(s[s_pos]==dictionary[i][d_pos])
                    d_pos++;
                
                    s_pos++;

            }
            if(d_pos==d_i_len)
                stk.push_back(dictionary[i]);
            
        }
         sort(stk.begin(),stk.end());
        int mxlen=0;
        int idx=-1;
        for(int ss=stk.size()-1;ss>=0;ss--)
        {
            // cout<<stk[ss].length();
            if((stk[ss].length())>=mxlen)
            {
                mxlen=stk[ss].length();
                idx=ss;
            }
        }
         // cout<<mxlen<<"\t"<<idx;
        if(idx!=-1)
            return stk[idx];
        else
        return "";
    }
};