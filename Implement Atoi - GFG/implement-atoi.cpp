// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    
    int atoi(string str) {
        
        char ch;
        int count=0,i=0;
        if(str[0]=='-')
        i=1;
        else
        i=0;
    
        for(;i<str.length();i++)
        {
            if(str[i]-'0'>=0&&str[i]-'0'<=9)
            {
                count=count*10+str[i]-'0';
            }
            else
            return -1;
        }
        if(str[0]=='-')
        return -count;
        return count;
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends