// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int countZeroes(int arr[], int n) {
    // code here
    if(arr[0]==0)
    return n;
    else if(arr[n-1]==1)
    return 0;
    
    int l=0,h=n-1,mid=0;
    while(l<=h)
    {
        mid=l+h;
        mid=mid/2;
        if(arr[mid]==1)
        {
            while(mid<n&&arr[mid]==1)
            mid++;
        
            break;
        }
        else
        h=mid-1;
    }
    return n-mid;
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);;
        }
        
        int ans = countZeroes(arr, n);
        printf("%d\n", ans);
    }
    return 0;
}
  // } Driver Code Ends