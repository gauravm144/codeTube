// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item arr1,Item arr2){
    double r1=(((double)arr1.value)/((double)arr1.weight));
    double r2=(((double)arr2.value)/((double)arr2.weight));
    return r1>r2;
        
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        int remwt=W;
        double prof=0;
        for(int i=0;i<n;i++)
        {
             if((remwt-arr[i].weight)<0)
            {
             prof=prof+((double)remwt*arr[i].value)/arr[i].weight;
             remwt=0;
             break;
             }
             remwt=remwt-arr[i].weight;
             prof=prof+arr[i].value;
         }
        // cout<<arr[i].weight<<"  "<<arr[i].value<<endl;
        
    
    return prof;
    }   
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends