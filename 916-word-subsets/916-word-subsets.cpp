class Solution {
public:
    vector<int> get_freq(string s)
    {
        vector<int> vtk(26,0);
        for(int i=0;i<s.length();i++)
            vtk[s[i]-'a']+=1;
        
        return vtk;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> words2_max_freq(26,0);
        
        for(int i=0;i<words2.size();i++)
        {
            vector<int> tmp=get_freq(words2[i]);
            for(int j=0;j<26;j++)
                words2_max_freq[j]=max(words2_max_freq[j],tmp[j]);
        }
        
        vector<string> res;
      for(int i=0;i<words1.size();i++)
      {
          vector<int> tmp=get_freq(words1[i]);
          bool flag=true;
          for(int j=0;j<26;j++)
          {
              if(tmp[j]<words2_max_freq[j])
              {
                  flag=false;
                  break;
              }
          }
          if(flag==true)
           res.push_back(words1[i]);   
      }
        
        return res;
    }
};