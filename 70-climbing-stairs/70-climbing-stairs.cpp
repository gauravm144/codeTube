class Solution {
public:
   int CS(int n,vector<int> &res)
   {
        if(n<0)
            return 0;
        if(n==1||n==0)
            return 1;
        if(res[n]>0)
            return res[n];
            
            
        int a=CS(n-1,res);
        int b=CS(n-2,res);
        int c=a+b;
       res[n]=c;
       return c;
   }
        
    int climbStairs(int n) {
       vector<int> res(n+1,0);
        int c=CS(n,res);
        return c;
       
        
    }
};