// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int x=0;
        for(int i=0;i<nums.size();i++)
        x=x^nums[i];
        // cout<<"XOR"<<x<<endl;
        x=(x)&(-x);
        // cout<<"rightMost"<<x<<endl;
        int a=0;
        vector<int> a1,a2;
        for(int i=0;i<nums.size();i++)
        {
           a=x&nums[i];
           if(a>0)
           a1.push_back(nums[i]);
           else
           a2.push_back(nums[i]);
        }
        // cout<<a1.size()<<a2.size();
        for(int i=1;i<a1.size();i++)
        a1[0]=a1[0]^a1[i];
        for(int i=1;i<a2.size();i++)
        a2[0]=a2[0]^a2[i];
       
        if(a1[0]>a2[0])
        {
            // x=a1[0];
            a=a2[0];
            a2[0]=a1[0];
            a1[0]=a;
            
        }
        vector<int> vt{a1[0],a2[0]};
        return vt;
        
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends