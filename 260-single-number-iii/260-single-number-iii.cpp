class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(auto a:nums)
        x=x^a;
        if(x==INT_MIN)
            x=0;
        
        x=x&(-x);
        
        vector<int> a1,a2;
        for(auto s:nums)
        {
            if((x&s)==0)
                a1.push_back(s);
            else
                a2.push_back(s);
                
        }
        int elem1=0,elem2=0;
        for(auto s:a1)
            elem1=elem1^s;
        for(auto s:a2)
            elem2=elem2^s;
        
        vector<int> ans{elem1,elem2};
        return ans;
    }
};