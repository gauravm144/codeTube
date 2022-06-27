class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        vector<int> right_mn(n+1);
        right_mn[n]=INT_MAX;
            for(int i=n-1;i>=0;i--)
            {
                right_mn[i]=min(right_mn[i+1],arr[i]);
            }
    
        
        vector<int> left_mx(n+1);
        left_mx[0]=arr[0];
            for(int i=1;i<n;i++)
            {
                left_mx[i]=max(left_mx[i-1],arr[i]);
            }
        left_mx[n]=max(left_mx[n-1],arr[n-1]);
        
//           for(auto i:left_mx)
//             cout<<i<<"\t";
//             cout<<endl;
        
//         for(auto i:right_mn)
//             cout<<i<<"\t";
//             cout<<endl;
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(left_mx[i]<=right_mn[i+1])
                count++;
            
        }
        return count;
        
    }
};