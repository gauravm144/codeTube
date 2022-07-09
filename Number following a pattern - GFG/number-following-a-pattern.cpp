// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        int num=0;
        int n=S.length();
        string res="";
        stack<int> stk;
        for(int i=0;i<n;i++)
        {
            num++;
            
            if(S[i]=='D')
            {
             stk.push(num);   
            }
            else
            {
                res=res+(to_string(num));
                 
                while(stk.size()>0)
                {
                 res=res+to_string(stk.top());
                 stk.pop();
                }
            }
            
        }
        num++;
        res=res+to_string(num);
        while(stk.size()>0)
        {
            res=res+to_string(stk.top());
            stk.pop();
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends