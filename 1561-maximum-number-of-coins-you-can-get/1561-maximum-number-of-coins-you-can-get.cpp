class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int a=piles.size()/3;
        int i=0,j=1,k=piles.size()-1;
        int sum=0;
        while(a--)
        {
        sum+=piles[j];
            j++;
            i=j;
            j++;
            k--;
            
        }
        return sum;
    }
};