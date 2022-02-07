class Solution {
public:
    string toLowerCase(string s) {
        char ch='a'-32;
        cout<<ch;
        for(int i=0;i<s.length();i++)
        {
           char ch=s.at(i);
            if(ch>=65&&ch<=90)
            {ch=ch+32;
             s[i]=ch;
             }
        }
        return s;
    }
};