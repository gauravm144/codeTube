// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
      stack<int> stk;
      for(int i=0;i<n;i++)
      stk.push(i);
      
      while(stk.size()>1)
      {
          int a=stk.top();
          stk.pop();
          int b=stk.top();
          stk.pop();
          if(M[a][b]==1)
          {
              stk.push(b);
          }
          else
          {
              stk.push(a);
          }
      }
      int pot=stk.top();
      for(int i=0;i<n;i++)
      if(M[pot][i]==1)
      return -1;
      
      for(int i=0;i<n;i++)
      if(i!=pot&&M[i][pot]==0)
      return -1;
      
      
      
      return pot;
      
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends