class Solution {
public:
    bool isPowerOfTwo(int n) {
//         if(n==1)
//             return true;
//         else if(n==0)
//             return false;
 
//         if(n%2==0)
//         return isPowerOfTwo(n/2);
//         else 
//         return false; 
        if( (n>0) &&  (n&(n-1))==0 )
        {  
            return true;
        }
        else
            return false;
    }
};