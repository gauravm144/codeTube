class Solution {
public:
    vector<int> find(int n)
    {
        if(n==0)
        {
            vector<int> tmp;
            tmp.push_back(0);
            return tmp;
        }
        vector<int> ans=find(n-1);
        vector<int> res;
        for(int i=0;i<ans.size();i++)
        {
            res.push_back(ans[i]);
        }
          for(int i=ans.size()-1;i>=0;i--)
        {
              int a=pow(2,n-1);
              a=a|ans[i];
            res.push_back(a);
        }
        return res;
    }
    vector<int> grayCode(int n) {
        vector<int> res=find(n);
        return res;
    }
};