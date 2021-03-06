// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> res(n);
       stack<int> stk;
       stk.push(0);
       res[0]=1;
       for(int i=1;i<n;i++)
       {
           while(stk.size()>0&&price[stk.top()]<=price[i])
           stk.pop();
           
           if(stk.size()>0)
           res[i]=i-stk.top();
           else
           res[i]=i+1;
           
           stk.push(i);
       }
       return res;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends