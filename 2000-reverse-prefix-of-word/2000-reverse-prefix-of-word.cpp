class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        for(;i<word.size();i++)
        {
            if(ch==word[i])
                break;
        }
        if(i==word.size())
            return word;
        char c1;
        int j=i,k=0;
        
        for(;j>=k;j--)
        {
            c1=word[j];
            // cout<<c1;
            word[j]=word[k];
            word[k]=c1;
            k++;
        }
        // cout<<i;
        return word;
        
    }
};