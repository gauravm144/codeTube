// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        int i=0,j=N-1;
        int amount=0;
        while(i<=j)
        {
            amount+=candies[i];
            i++;
            j=j-K;
        }
        vector<int> vtk;
        vtk.push_back(amount);
        i=0;
        j=N-1;
        amount=0;
        while(i<=j)
        {
            amount+=candies[j];
            j--;
            i+=K;
        }
        vtk.push_back(amount);
        return vtk;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends