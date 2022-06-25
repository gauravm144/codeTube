class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int low=0,high=nums.size()-1;
        int pt=-1;
        int mid=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                pt=mid;
                high=mid-1;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
        vector<int> vtk;
        vtk.push_back(pt);
        low=0,high=nums.size()-1;
        mid=0;
        pt=-1;
        
           while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                pt=mid;
                low=mid+1;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
          vtk.push_back(pt);
        return vtk;
    }
};