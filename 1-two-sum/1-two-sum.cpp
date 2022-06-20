class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int tmp=0;
        for(int i=0;i<n;i++)
        {
            tmp=target-nums[i];
            if(mp.find(tmp)!=mp.end())
            {
                vector<int> vtk;
                vtk.push_back(mp[tmp]);
                vtk.push_back(i);
                return vtk;
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return vector<int>{-1,-1};
    }
};