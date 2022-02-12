class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        stk.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(stk.size()>0&&stk.top()==s[i])
            {
                stk.pop();
            continue;
            }
            stk.push(s[i]);
            
        }
        s="";
        while(stk.size()>0)
        {
            s=stk.top()+s;
            stk.pop();
        }
        return s;
        
    }
};