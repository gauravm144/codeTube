class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        if(n==0)
        {
            return res;
        }
        vector<int> tmp=intervals[0];
        for(int i=0;i<n;i++)
        {
            if(intervals[i][0]<=tmp[1])
                tmp[1]=max(tmp[1],intervals[i][1]);
            else
            {
                res.push_back(tmp);
                tmp=intervals[i];
            }
        }
        res.push_back(tmp);
        return res;
    }
};