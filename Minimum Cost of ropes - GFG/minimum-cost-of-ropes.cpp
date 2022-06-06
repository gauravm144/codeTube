// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
       priority_queue<long long,vector<long long>, greater<long long>> g ;
       for(long long i=0;i<n;i++)
       {
           g.push(arr[i]);
       }
        long long sum=0;
       long long a1,a2;
       while(g.size()>1)
       {
           a1=g.top();
           g.pop();
           a2=g.top();
           g.pop();
           sum+=a1+a2;
           g.push(a1+a2);
       }
         return sum;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends