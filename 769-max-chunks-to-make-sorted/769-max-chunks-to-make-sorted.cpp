class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int num_at_pos=0;
        int count=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>num_at_pos)
            {
                num_at_pos=arr[i];
            }
            if(num_at_pos==i)
            {
                count++;
            }
        }
        return count;
    }
};