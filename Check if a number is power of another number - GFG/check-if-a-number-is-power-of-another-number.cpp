// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int isPowerOfAnother(long long x, long long y){
        // code here
        if(x==1&&y!=1)
        return 0;
        if(x==1&&y==1)
        return 1;
        
        float X=log2(y)/log2(x);
        if(X==floor(X))
        return 1;
        else
        return 0;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
}   // } Driver Code Ends