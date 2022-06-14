// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int count=0,res=0,index=n-1;
	    int j=m-1;
	    for(int i=n-1;i>=0;i--)
	    {
	        count=0;
	        if(arr[i][m-1]!=0)
	        {
	            while(j>=0&&arr[i][j]>0)
	            {count++;
	            j--;
	            }
	            j=m-1;
	            if(count>=res)
	            {
	                res=count;
	                index=i;
	            }
	        }
	        else
	        continue;
	       
	        
	    }
	    if(res==0)
	    return -1;
	    return index;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends