class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
     if(nums.size()==0)
         return res;
    int n=nums.size();
    int p=pow(2,n);
    int x,tmp;
    for(int i=0;i<p;i++)
    {
        x=1;
        x=x<<(n-1);
        tmp=i;
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            if(x&tmp)
            {
             v.push_back(nums[j]);   
            }
            x=x>>1;
        }
        res.push_back(v);
    }
        
    return res;
    }
};