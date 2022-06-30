class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> stk;
        for(int i=0;i<n;i++)
        {
            
            if(s[i]==')')
            {
                if(stk.size()>0&&stk.top()=='(')
                    stk.pop();
                else
                    return false;
            }
            else if(s[i]==']')
            {
                 if(stk.size()>0&&stk.top()=='[')
                    stk.pop();
                else
                    return false;
            }
            else if(s[i]=='}')
            {
              if(stk.size()>0&&stk.top()=='{')
                    stk.pop();
                else
                    return false;   
            }
            else
            {
                stk.push(s[i]);
            }
        }
        if(stk.size()>0)
            return false;
        else
        return true;
    }
};