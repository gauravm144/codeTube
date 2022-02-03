class Solution {
public:
    int minimumCost(vector<int>& v) {
        if(v.size()==1)
            return v[0];
        if(v.size()==2)
            return v[1]+v[0];
           sort(v.begin(), v.end());
        int cost=0;
        for(int i=v.size()-1;i>=0;)
        {
            // cout<<i<<endl;
            if(i>=0)
            cost+=v[i];
            else
                break;
            i--;
            if(i>=0)
            cost+=v[i];
            else 
            break;
            i--;
            i--;
        }
        return cost;
    }
};