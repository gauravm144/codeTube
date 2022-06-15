// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n<3)
         return -1 ;
         priority_queue<int,vector<int>,greater<int>> q;
         for(int i=0;i<3;i++)
         q.push(a[i]);
         
         for(int i=3;i<n;i++)
         {
             if(q.top()<a[i])
             {
                 q.pop();
                 q.push(a[i]);
             }
         }
         return q.top();
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends