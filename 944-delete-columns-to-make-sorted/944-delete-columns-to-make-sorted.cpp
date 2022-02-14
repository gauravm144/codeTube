class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if(strs.size()==0)
            return 0;
        int count=0;
        // cout<<strs.size()<<strs[0].size();
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j-1][i]>strs[j][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};