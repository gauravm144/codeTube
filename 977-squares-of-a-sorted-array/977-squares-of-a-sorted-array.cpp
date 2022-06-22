class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        vector<int> res(n);
        while(left<=right)
        {
            if(abs(nums[left])<abs(nums[right]))
            {
                res[right-left]=nums[right]*nums[right];
                right--;
            }
             else if(abs(nums[left])>abs(nums[right]))
            {
                res[right-left]=nums[left]*nums[left];
                left++;
            }
            else 
            {
               res[right-left]=nums[left]*nums[left];
                if(left!=right)
               res[right-left-1]=nums[left]*nums[left];
                left++;
                right--;
            }
        }
        return res;
    }
};