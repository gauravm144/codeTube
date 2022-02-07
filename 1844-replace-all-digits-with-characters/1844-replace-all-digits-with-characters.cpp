class Solution {
public:
    string replaceDigits(string s) {
        string ss="";
        ss+=s[0];
        for(int i=1;i<s.length();i++)
        {
            int  ch2=s.at(i);
            if(ch2>=48&&ch2<=57)
            {
                char ch1=ss[ss.length()-1]+ch2-'0';
                ss+=ch1;
            }
            else
            {
               ss+=s[i]; 
            }
        }
        return ss;
    }
};