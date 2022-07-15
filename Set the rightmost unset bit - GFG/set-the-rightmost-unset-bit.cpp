// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:


    int setBit(int N)
    {
        // Write Your Code here
        int x=1;
        int count=log2(N)+1;
        
        while((x&N)!=0&&(count--))
        {
            x=x<<1;
        }
        if(count==0)
        return N;
        else
        return x|N;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends