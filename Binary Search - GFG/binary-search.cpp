// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int a[], int n, int k) {
        // code here
        int l=0,h=n-1;
        int mid=0;
        while(l<=h)
        {
            mid=l+h;
            mid=mid/2;
            if(a[mid]==k)
            return mid;
            else if(k>a[mid])
            l=mid+1;
            else
            h=mid-1;
        }
        if(l>h)
        return -1;
        
        return mid;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends