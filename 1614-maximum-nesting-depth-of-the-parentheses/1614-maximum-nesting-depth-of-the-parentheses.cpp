class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int depth=0,tmp=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                tmp++;
            else if(s[i]==')')
                tmp--;
            depth=max(depth,tmp);
        }
    
        return depth;
        
    }
};