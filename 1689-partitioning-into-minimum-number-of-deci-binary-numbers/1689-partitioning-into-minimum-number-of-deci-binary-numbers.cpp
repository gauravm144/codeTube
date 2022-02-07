class Solution {
public:
    int minPartitions(string n) {
        int max=0;
        int n1=0;
        for(int i=0;i<n.length();i++)
        {
            char ch=n.at(i);
            n1=ch-'0';
         if(n1>max)
             max=n1;
        }
   
        return max;
    }
};