// { Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int l=0,h=n-1,mid=0;
	    while(l<=h)
	    {
	        mid=l+h;
	        mid=mid/2;
	        if(arr[mid]==x)
	        {
	            int x1=mid-1,x2=mid+1;
	            while(x1>=0&&arr[x1]==x)
	            x1--;
	            while(x2<n&&arr[x2]==x)
	            x2++;
	            return (x2-1)-(x1+1)+1;
	           // break;
	            
	        }
	        else if(x>arr[mid])
	        {
	            l=mid+1;
	        }
	        else
	        {
	            h=mid-1;
	        }
	        
	    }
	    if(l>h)
	    return 0;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends