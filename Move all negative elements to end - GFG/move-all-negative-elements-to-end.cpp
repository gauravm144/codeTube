// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int a[],int n)
    {
        vector<int> pos,neg;
        
     for(int i=0;i<n;i++)
     {
         if(a[i]>=0)
         pos.push_back(a[i]);
         else 
         neg.push_back(a[i]);
     }
     int i=0;
     for(;i<pos.size();i++)
     a[i]=pos[i];
     
     int j=0;
     i=pos.size();
     for(;i<n;i++)
     a[i]=neg[j++];
     
     
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends