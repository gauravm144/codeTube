class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        int left=0,right=0;
        int mylength=0;
        unordered_map<char,int> mp;
        while(right<n)
        {
            if(mp.find(s[right])!=mp.end())
            {
                left=max(mp[s[right]]+1,left);
            }
            mp[s[right]]=right;
            mylength=max(mylength,right-left+1);
            right++;
        }
        return mylength;
    }
};