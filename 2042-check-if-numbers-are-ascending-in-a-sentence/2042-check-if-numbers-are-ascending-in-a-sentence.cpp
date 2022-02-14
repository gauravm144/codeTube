class Solution {
public:
    bool areNumbersAscending(string s) {
        string s1="";
        int j=0;
        int max=-1;
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {  j=i;
                while(isdigit(s[j]))
                {s1+=s[j];j++;i++;}
            if(stoi(s1)<=max)
                return false;
             else
                 max=stoi(s1);
            }
                      s1="";
        }
        return true;
    }
};