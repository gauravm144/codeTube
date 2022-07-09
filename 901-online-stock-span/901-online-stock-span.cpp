class StockSpanner {
public:
    stack<pair<int,int>> stk;
    int idx=0;
    int next(int price) {
       while(stk.size()>0&&(stk.top()).first<=price)
           stk.pop();
        
        if(stk.size()==0)
        {
         stk.push({price,idx});
         idx++;
            return idx;
        }
        else
        {
            int tmp=(stk.top()).second;
            stk.push({price,idx});
            idx++;
            return (stk.top()).second-tmp;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */