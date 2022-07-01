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
        // code here 
        stack<int> stk;
        for(int i=0;i<n;i++)
        stk.push(i);
        
        for(int i=0;i<n&&stk.size()>1;i++)
        {
            int mai=stk.top();
            stk.pop();
            int isko=stk.top();
            stk.pop();
            if(M[mai][isko]==0)
            {
                stk.push(mai);
            }
            else
            {
                stk.push(isko);
            }
        }
        // potential is stk.top
        for(int j=0;j<n;j++)
        {
            if(M[stk.top()][j]!=0)
            return -1;
        }
         for(int i=0;i<n;i++)
        {
            if(i==stk.top())
            continue;
            
            if(M[i][stk.top()]!=1)
            return -1;
        }
        
        
        return stk.top();
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