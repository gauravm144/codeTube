class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int c=0,t=0;
        unordered_map<string,int> mp;
        for(int i=0;i<words1.size();i++)
        {
            for(int j=0;j<words2.size();j++)
            {
             if(words1[i].compare(words2[j])==0)
                 mp[words1[i]]+=1;
            }
            
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1)
                continue;
            c++;
        }
        return c;
        
    }
};