class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()<3)
            return 0;
        int res=0;
        char a=s[0],b=s[1],c=s[2];
        for(int i=3;i<s.length();i++)
        {
            if(a!=b&&b!=c&&c!=a)
                res++;
            a=b;
            b=c;
            c=s[i];
        }
        if(a!=b&&b!=c&&c!=a)
                res++;
        return res;
        
    }
};