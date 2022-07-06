class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int pick=0;
        int dont=0;
        int prev2=0;
        for(int i=1;i<n;i++)
        {
            pick=nums[i];
            
            if(i>1)
            pick+=prev2;
            
            dont=prev;
            prev2=prev;
            prev=max(pick,dont);
        }
        return prev;
    }
};