// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool ispos(int A[], int N, int students,int pages)
    {
          int cnt = 0;
          int sumAllocated = 0;
        for (int i = 0; i <N; i++) 
        {
            if (sumAllocated + A[i] > pages) 
            {
            cnt++;
            sumAllocated = A[i];
            if (sumAllocated > pages) 
            return false;
        } 
        else 
        {
        sumAllocated += A[i];
        }
        }
        
        if (cnt < students) 
        return true;
        
        return false;
  
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N)
        return -1;
        
        
        int low=INT_MAX;
        int high=0;
        for(int i=0;i<N;i++)
        {
        high=high+A[i];
        if(low>A[i])
        low=A[i];
        }
        int mid=-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ispos(A,N,M,mid))
            high=mid-1;
            else
            low=mid+1;
            
        }
        
        
        
        
        return low;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends