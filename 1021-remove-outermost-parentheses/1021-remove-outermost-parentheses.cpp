class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1="";
        stack<char> stk;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                stk.push(s[i]);
                if(stk.size()>1)
                    s1+="(";
            }
            else if(s[i]==')')
            {
                if(stk.size()>0&&stk.top()=='(')
                {
                    stk.pop();
                }
                if(stk.size()>0&&stk.top()=='(')
                {
                    s1=s1+")";
                }
            }
        }
        return s1;
        
    }
};