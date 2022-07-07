class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        
        
        
//        excluding first element and including last
        int Fprev1=nums[1];
        int Fprev2=0;
        for(int i=2;i<n;i++)
        {
            int pick=nums[i]+Fprev2;
            int dont=0+Fprev1;
            Fprev2=Fprev1;
            Fprev1=max(pick,dont);
        }
        //       including first element and   excluding last
        int Lprev1=nums[0];
        int Lprev2=0;
        for(int i=1;i<n-1;i++)
        {
            int pick=nums[i]+Lprev2;
            int dont=0+Lprev1;
            Lprev2=Lprev1;
            Lprev1=max(pick,dont);
        }
        return max(Fprev1,Lprev1);
    }
};