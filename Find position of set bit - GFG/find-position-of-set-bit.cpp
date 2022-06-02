// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    
    int findPosition(int N) {
        // code here
        if(N==0)
        return -1;
        bool flag=true;
        int N1=N&(N-1);
        if(N1==0)
        {
            int x=0;
         while(N!=0)
         {
             N=N>>1;
             x++;
         }
         return x;
        }
        else
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends