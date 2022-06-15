// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    scanf("%d",&T);
    while (T--) {
        int n;
        scanf("%d",&n);
        printf("%d\n",convertFive(n));
    }
}
// } Driver Code Ends


//User function Template for C

int convertFive(int num) {
    // code here
    int tmp=0;
    int aux=0;
    int count=0;
    int res=num;
    while(num)
    {
        tmp=num%10;
        if(tmp==0)
        {
            aux+=pow(10,count)*5;
        }
        num=num/10;
        count++;
    }
    return aux+res;
}