// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long arr[], int n) {
     pair<int,int> pr;
     pr.first=arr[0],pr.second=arr[0];
    for(int i=1;i<n;i++)
    {
        if(pr.second<arr[i])
        pr.second=arr[i];
        if(pr.first>arr[i])
        pr.first=arr[i];
    }
    return pr;
}