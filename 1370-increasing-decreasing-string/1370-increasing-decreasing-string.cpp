class Solution {
public:
    string sortString(string s) {
     
        int ar[26]={0};
        int k=0;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            ar[s[i]-'a']++;
            k++;
        }
        while(k)
        {
             for(int i=0;i<26;i++)
            {
                 if(ar[i]>0)
                 {
                 res+=i+'a';
                     ar[i]--;
                     k--;
                 }
            } 
             for(int i=25;i>=0;i--)
            {
                 if(ar[i]>0)
                 {
                 res+=i+'a';
                     ar[i]--;
                     k--;
                 }
            } 
        }
        
         // cout<<res;
        return res;
    }
};