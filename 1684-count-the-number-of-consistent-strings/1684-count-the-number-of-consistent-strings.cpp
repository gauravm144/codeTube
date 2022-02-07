class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        unordered_set<char> stk;
        for(int i=0;i<allowed.length();i++)
        {
            stk.insert(allowed[i]);
        }
        bool flag=true;
        for(int i=0;i<words.size();i++)
        {
            flag=true;   
            for(int j=0;j<words[i].length();j++)
            {
                if(stk.find(words[i][j])==stk.end())
                    flag=false;
            }
            if(flag==true)
                count++;
            // cout<<endl;
        }
        return count;
    }
};