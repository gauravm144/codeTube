class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        int n=s.length();
        for(int i=0;i<n;i++)
            mp[s[i]]=i;
        
        // for(auto m=mp.begin();m!=mp.end();m++)
        // {
        //     cout<<m->first<<"  "<<m->second<<endl;
        // }
        int prev=-1;
        int max=0;
        vector<int> vtk;
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]>max)
                max=mp[s[i]];
            if(max==i)
            {
                vtk.push_back(max-prev);
                prev=max;
            }
        }
        
        return vtk;
    }
};