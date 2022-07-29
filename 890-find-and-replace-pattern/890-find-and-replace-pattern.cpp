class Solution {
public:
    string makepat(string word)
    {
       unordered_map<char,int> tt;
       string tmp="";
        int ct=0;
       for(int i=0;i<word.size();i++)
       {
           if(i==0)
           {
               tmp+="1";
               ct=1;
               tt[word[0]]=1;
           }
           else
           {
               if(tt.find(word[i])!=tt.end())
               {
                   tmp+=to_string(tt[word[i]])+",";
               }
               else
               {
                   ct+=1;
                   tt[word[i]]=ct;
                   tmp+=to_string(ct)+",";
               }
               
           }
       }
        return tmp;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> vtk;
        string tmp=makepat(pattern);
        for(auto word:words)
        {
            cout<<word<<"  "<<makepat(word)<<endl;
            if(makepat(word).compare(tmp)==0)
            vtk.push_back(word);                
        }
        return vtk;
    }
};