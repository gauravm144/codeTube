class Solution {
public:
    static bool st(vector<int> a,vector<int> b)
    {
        return a[1]>=b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),st);
        
    int count=0;
    int dif=0;
    int n=boxTypes.size();
        for(int i=0;i<n&&truckSize>=0;i++)
        {
            dif=truckSize-boxTypes[i][0];
            if(dif>=0)
            {
                count+=boxTypes[i][0]*boxTypes[i][1];
            }
            else
            {
                count+=truckSize*boxTypes[i][1];
            }
            truckSize=dif;
        }
        return count;
    }
};