class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stk;
        
        int myvet[prices.size()];
        myvet[prices.size()-1]=prices[prices.size()-1];
            
        stk.push(prices[prices.size()-1]);
        
        for(int i=prices.size()-2;i>=0;i--)
        {
            if(stk.size()>0&&prices[i]>=stk.top())
            {
                myvet[i]=prices[i]-stk.top();
                stk.push(prices[i]);
            }
            else
            {
            while(stk.size()>0&&prices[i]<stk.top())
            {
                stk.pop();
            }
                if(stk.size()==0)
                {
                    myvet[i]=prices[i];
                    stk.push(prices[i]);
                }
                else
                {
                myvet[i]=prices[i]-stk.top();
                stk.push(prices[i]);
                }
            }
            
        }
        vector<int> vtk;
        for(int i=0;i<prices.size();i++)
        {
            vtk.push_back(myvet[i]);
        }
        return vtk;
    }
};