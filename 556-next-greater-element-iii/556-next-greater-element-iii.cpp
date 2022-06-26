class Solution {
public:
    int nextGreaterElement(int n) {
        string s;
        s="";
        s=to_string(n);
        int len=s.length();
        int idx1=-1,idx2=-1;
        for(int i=len-2;i>=0;i--)
        {
            if(s[i]<s[i+1])
            {
                idx1=i;
                break;
            }
        }
        if(idx1==-1)
            return -1;
        for(int j=len-1;j>idx1;j--)
        {
            if(s[idx1]<s[j])
            {
                idx2=j;
                break;
            }
        }
        swap(s[idx1],s[idx2]);
        reverse(s.begin()+idx1+1,s.end());
        cout<<s;
        
        long next = stol(s);
        return next == n || next > INT_MAX ? -1 : next;
    }
};