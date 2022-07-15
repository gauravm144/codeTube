class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto s:nums)
        {
                mp[s]+=1;
        }
        int a=0;
        for(auto m=mp.begin();m!=mp.end();m++)
            if(m->second==1)
            {
                a=m->first;
                break;
            }
        return a;
    }
};