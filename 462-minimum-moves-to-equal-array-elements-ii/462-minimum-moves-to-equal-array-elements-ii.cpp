class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int med=-1;
        med=(n-1)/2;
        
        if(n%2==0)
        {
            med+=1;
        }
        int numb=nums[med];
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=abs(nums[i]-numb);
        cout<<sum;

    return sum;   
    }
};