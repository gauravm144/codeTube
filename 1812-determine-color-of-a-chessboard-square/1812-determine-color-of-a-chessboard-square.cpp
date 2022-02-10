class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int ch1=coordinates[0]-'a'+1;
        int ch2=coordinates[1]-'0';
        if((ch1+ch2)%2==0)
            return false;
        // cout<<ch1<<" "<<ch2;
        return true;
    }
};