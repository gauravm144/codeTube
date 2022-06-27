class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> left_max(n+1);
        left_max[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            left_max[i]=max(nums[i],left_max[i-1]);
        }
        left_max[n]=max(nums[n-1],left_max[n-1]);
        
        vector<int> right_mn(n+1);
        right_mn[n]=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            right_mn[i]=min(nums[i],right_mn[i+1]);
        }
        int idx=-1;
         for(int i=0;i<n;i++)
         {
             if(left_max[i]<=right_mn[i+1])
             {
             idx=i;
             break;
             }
         }
        
      
            
        if(idx!=-1)
            return idx+1;
        else return n-1;
    }
};