class Solution {
public:
    int ff(string word)
    {
        int count=0,sum=0;
        for(int i=0;i<word.length();i++)
        {
            char ch=word[i]-'a';
            sum=sum*10+ch;
            // cout<<sum<<endl;
        }
        return sum;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int f1=0,f2=0,f3=0;
        f1=ff(firstWord);
        f2=ff(secondWord);
        f3=ff(targetWord);
        cout<<f3;
        if((f1+f2)==f3)
        return true;
        else
            return false;
    }
};