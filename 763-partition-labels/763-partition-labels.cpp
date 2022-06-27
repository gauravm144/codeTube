class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]]=i;
        
        int pos=mp[s[0]];
        int sum=0;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(pos<mp[s[i]])
            {
                pos=mp[s[i]];
            }
            if(pos==mp[s[i]]&&pos==i)
            {
                res.push_back(mp[s[i]]+1);
                
            }
            
        }
        for(int i=res.size()-1;i>0;i--)
        {
            res[i]=res[i]-res[i-1];
        }
        return res;
    }
};