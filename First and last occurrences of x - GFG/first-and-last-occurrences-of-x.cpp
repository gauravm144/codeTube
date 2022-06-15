// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int l=0,h=n-1;
    int mid=0;
     vector<int> vtk(2);
    while(l<=h)
    {
        mid=l+h;
        mid=mid/2;
        if(arr[mid]==x)
        {
            int t1=mid,t2=mid;
            while(arr[t1]==x&&t1>=0)
            t1--;
            while(arr[t2]==x&&t2<n)
            t2++;
           
            vtk[0]=++t1;
            vtk[1]=--t2;
            break;
        }
        else if(x>arr[mid])
        l=mid+1;
        else
        h=mid-1;
    }
    if(l>h)
    return vector<int>{-1,-1};
    return vtk;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends