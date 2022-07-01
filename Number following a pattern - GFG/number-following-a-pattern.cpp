// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
     
       // code here 
       stack<int> stk;
       int num=1;
       int n=S.length();
       string ans="";
       for(int i=0;i<n;i++)
       {
            stk.push(num);
            num++;
           if(S[i]=='I')
           {
               while(stk.size()>0)
               {
                   ans+=to_string(stk.top());
                   stk.pop();
               }
           }
        
       }
       ans+=to_string(num);
       while(stk.size()>0)
               {
                   ans+=to_string(stk.top());
                   stk.pop();
               }
       return ans;
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