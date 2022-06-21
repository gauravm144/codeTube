class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        
        int num1=-1,num2=-1,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(num1==nums[i])
                c1++;
            else if(num2==nums[i])
                c2++;
            else if(c1==0)
            {
                c1++;
                num1=nums[i];
            }
            else if(c2==0)
            {
                c2++;
                num2=nums[i];
            }
            else
            {
                c1--;
                c2--;
            }
        }
        int N=n/3;
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
        }
        vector<int> vtk;
        if(count1>N)
            vtk.push_back(num1);
        if(count2>N)
            vtk.push_back(num2);
        return vtk;
    }
};