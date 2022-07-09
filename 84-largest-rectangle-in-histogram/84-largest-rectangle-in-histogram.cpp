class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> left(n);
        vector<int> right(n);
        
        stack<int> stk;
        right[n-1]=n;
        stk.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
        while(stk.size()>0&&heights[i]<=heights[stk.top()])
            stk.pop();
            
            if(stk.size()==0)
                right[i]=n;
            else
                right[i]=stk.top();
            
            stk.push(i);
        }
     
        while(stk.size()>0)
            stk.pop();
        
        left[0]=-1;
        stk.push(0);
        for(int i=1;i<n;i++)
        {
        while(stk.size()>0&&heights[i]<=heights[stk.top()])
            stk.pop();
            
            if(stk.size()==0)
                left[i]=-1;
            else
                left[i]=stk.top();
            
            stk.push(i);
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
         left[i]=right[i]-left[i]-1;
        left[i]=left[i]*heights[i];
        mx=max(mx,left[i]);
        }
        return mx;
        
        
     
        
    }
};