class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
      if(n==1||n==2)
          return nums[0];
        
        int elem=nums[0];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(count==0)
            {
                count++;
                elem=nums[i];
            }
            else if(elem==nums[i])
                count++;
            else
                count--;
        }
        return elem;
    }
};