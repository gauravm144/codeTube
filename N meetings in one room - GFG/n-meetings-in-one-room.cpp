// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int ans=0;
        vector<pair<int,int>> vtk(n);
        int a1=0,b1=0;
        for(int i=0;i<n;i++)
        {
            vtk[i].first=start[i];
            vtk[i].second=end[i];
            // vtk.push_back(start[i],end[i]);
        }

        sort(vtk.begin(),vtk.end(),comp);
            a1=-1,b1=-1;
        for(int i=0;i<n;i++)
        {
            
            // cout<<vtk[i].first<<"   "<<vtk[i].second<<endl;
            if(vtk[i].first>b1){
            ans++;
            b1=vtk[i].second;}
            // a1=vtk[i].first;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends