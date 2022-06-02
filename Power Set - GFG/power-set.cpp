// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> vt;
		    int n=pow(2,s.size());
		    for(int i=1;i<n;i++)
		    {
		        int x=i;
		        int j=0;
		        string c="";
		        while(x)
		        {
		            if(1&x)
		            c=c+s[j];
		            x=x>>1;
		            j++;
		        }
		        vt.push_back(c);
		    }
		    sort(vt.begin(),vt.end());
		    return vt;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends