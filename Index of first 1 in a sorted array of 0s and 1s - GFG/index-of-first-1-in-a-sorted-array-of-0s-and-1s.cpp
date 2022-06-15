// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int l=0,h=n-1,mid=0;
        while(l<=h)
        {
            mid=l+h;
            mid=mid/2;
            if(a[mid]==1)
            {
             
                int x=mid;
                //   cout<<x;
                while(x>=0&&a[x]==1)
                x--;
                return x+1;
            }
            else if(1>a[mid])
            l=mid+1;
            else
            h=mid-1;
        }
        if(l>h)
        return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}  // } Driver Code Ends