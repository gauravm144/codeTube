class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> vtk;
        for(int i=0;i<nums.size();i++)
            vtk.push_back(nums[i]);
        sort(vtk.begin(),vtk.end());
        int sum=0;
        for(int i=0,j=nums.size()-1;i<j;i++,j--)
        {
            if((vtk[i]+vtk[j])>sum)
                sum=vtk[i]+vtk[j];
        }
        return sum;
    }
};