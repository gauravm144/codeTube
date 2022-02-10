class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int ar[26]={0};
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            ar[s[i]-'a']+=1;
            if(max<ar[s[i]-'a'])
            max=ar[s[i]-'a'];
        }
        // for(int i=0;i<26;i++)
            // cout<<ar[i]<<endl;
        // cout<<max;
        for(int i=0;i<26;i++)
        {
            if(ar[i]!=0&&max!=ar[i])
                return false;
                
        }
        return true;
        
    }
};