// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
    vector<pair<int,int>> vtk;
    for(int i=0;i<n;i++)
    {
    vtk.push_back(make_pair(start[i],end[i]));
    }
    sort(vtk.begin(),vtk.end(),[&](auto &a,auto &b){return a.second < b.second;});
    int count=1;
    int i=0,j=1;
    
    while(j<n)
    {
        if(vtk[i].second<vtk[j].first)
        {
        count++;
        i=j;
        j++;
        // cout<<vtk[i].first<<"  "<<vtk[i].second<<endl;
        }
        else
        {
            j++;
        }
    }
        return count;
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