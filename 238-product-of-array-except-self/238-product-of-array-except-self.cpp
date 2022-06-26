class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> right(n);
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i];
        }
        
        int prod=1;
        vector<int> res(n);
        for(int i=0;i<n-1;i++)
        {
            int lp=prod;
            int rp=right[i+1];
            res[i]=lp*rp;
            prod=prod*nums[i];
        }
        res[n-1]=prod;
        return res;
    }
};