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

long long findmx(long long a[],long idx,long long n)
{
    if(idx==n-1)
    return a[idx];
    long long x=findmx(a,idx+1,n);
    if(x>a[idx])
    return x;
    else
    return a[idx];
}
long long findmn(long long a[],long idx,long long n)
{
    if(idx==n-1)
    return a[idx];
    long long x=findmn(a,idx+1,n);
    if(x<a[idx])
    return x;
    else
    return a[idx];
}
pair<long long, long long> getMinMax(long long a[], int n) {
 long long mx=findmx(a,0,n);   
 long long mn=findmn(a,0,n);
 pair<long,long> pr;
 pr.first=mn;
 pr.second=mx;
 return pr;
}