class Solution {
public:
    string freqAlphabets(string s) {
        string s1="";
        int ss=0;
        char ch;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='#')
            {
                i--;
                i--;
                
                ss=((s[i]-'0')*10)+s[i+1]-'0';
                // cout<<ss<<endl;
                ch='a'+ss-1;
                s1=ch+s1;
                continue;
            }
            ss=s[i]-'0';
            // cout<<ss<<endl;
            ch='a'+ss-1;
            // cout<<s[i]<<"  "<<ch<<endl;
            s1=ch+s1;
        }
        return s1;
        
    }
};