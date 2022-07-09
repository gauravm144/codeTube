class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> right(n);
        stack<int> stk;
        stk.push(n-1);
        right[n-1]=n;
        for(int i=n-2;i>=0;i--)
        {
            while(stk.size()>0&&nums[i]>=nums[stk.top()])
                stk.pop();
            if(stk.size()==0)
                right[i]=n;
            else
                right[i]=stk.top();
            
            stk.push(i);
        }
        int j=0;
        for(int i=0;i<n-k+1;i++)
        {
            if(j<i)
                j=i;
            while(right[j]<i+k)
            {
                j=right[j];
                
            }
            right[i]=nums[j];
        }
        for(int i=1;i<k;i++)
            right.pop_back();
        return right;
    }
};