class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     
    int n=nums.size();
    vector<int> nge(n);
    nge[n-1]=n;
    stack<int> stk;
    stk.push(n-1);
    for(int i=n-2;i>=0;i--)
    {
        while(stk.size()>0&&nums[i]>=nums[stk.top()])
            stk.pop();
    
         if(stk.size()==0)
             nge[i]=n;
        else
            nge[i]=stk.top();
        
        stk.push(i);
    }
    int j=0;
    for(int i=0;i<n-k+1;i++)
    {
        if(j<i)
            j=i;
        while(nge[j]<i+k)
            j=nge[j];
        nums[i]=nums[j];
    }
    k--;
    while(k--)
        nums.pop_back();
        return nums;
        
    }
};