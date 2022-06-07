class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1=0,i2=0;
        vector<int> g1;
        while(i1<m&&i2<n)
        {
            if(nums1[i1]<nums2[i2])
            {
                g1.push_back(nums1[i1]);
                i1++;
            }
            else if(nums1[i1]>nums2[i2])
            {
                g1.push_back(nums2[i2]);
                i2++;
            }
            else if(nums1[i1]==nums2[i2])
            {
                g1.push_back(nums1[i1]);
                g1.push_back(nums2[i2]);
                i1++;
                i2++;
            }
        }
        while(i1<m)
        {
            g1.push_back(nums1[i1]);
                i1++; 
        }
        while(i2<n)
        {
             g1.push_back(nums2[i2]);
                i2++;
        }
        nums1= g1;
    }
};