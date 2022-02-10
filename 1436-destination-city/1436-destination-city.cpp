class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s1;
        for(int i=0;i<paths.size();i++)
        {
            s1.insert(paths[i][1]);
        }
         for(int i=0;i<paths.size();i++)
        {
             s1.erase(paths[i][0]);
        }
        string res="";
        for(auto it=s1.begin();it!=s1.end();it++)
            res=*it;
        
        return res;
        
    }
};