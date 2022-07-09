class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]+=1;
        }
        int mx=-1;
        for(auto m=mp.begin();m!=mp.end();m++)
        {
            if((m->first)==(m->second))
                mx=max(mx,m->first);
        }
        return mx;
    }
};