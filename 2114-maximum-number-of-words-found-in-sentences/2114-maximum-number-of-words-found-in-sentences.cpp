class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0,tmp=0;
   
        for(int i=0;i<sentences.size();i++)
        {   
            if(sentences[i].size())
                tmp=1;
            else 
                tmp=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                    tmp++;
            }
         if(tmp>max)
             max=tmp;
        }
        
        return max;
    }
};