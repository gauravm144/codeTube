#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> vtk(n);
	    for(int i=0;i<n;i++)
	    cin>>vtk[i];
	    int tmp=0;
	    for(int i=0,j=n-1;i<=j;i++,j--)
	    {
	        tmp=vtk[i];
	        vtk[i]=vtk[j];
	        vtk[j]=tmp;
	       // cout<<"hi";
	    }
	     for(int i=0;i<n;i++)
	    {
	      cout<<vtk[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}