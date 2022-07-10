// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    long long count=0;
    void hanoi(int N, int A, int B, int C)
    {
        if(N==0)
        return;
        hanoi(N-1,A,C,B);
        cout<<"move disk "<<N<<" from rod "<<A<<" to rod "<<B<<endl;
        count++;
        hanoi(N-1,C,B,A);
        
    }
    long long toh(int N, int from, int to, int aux) {
        hanoi(N,from,to,aux);
        return count;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends