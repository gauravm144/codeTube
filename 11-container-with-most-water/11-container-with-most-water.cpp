class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int water=0;
        while(i<j)
        {
            int diff=j-i;
            int ht=min(height[i],height[j]);
            water=max(water,diff*ht);
            if(height[i]<=height[j])
                i++;
            else 
                j--;
        }
        return water;
    }
};