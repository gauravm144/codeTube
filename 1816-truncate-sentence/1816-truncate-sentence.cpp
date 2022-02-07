class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=1,pos=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.at(i);
            if(ch==' '){
                count++;
                }
            pos++;
            if(count-1==k)
            {
                break;
            }
            
        }
        if(pos==s.length())
            return s;
        else
        return s.substr(0,pos-1);
        
    }
};