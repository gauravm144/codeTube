class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char> vtk(26,0);
        for(int i=0;i<sentence.length();i++)
        {
            char ch=sentence.at(i);
            vtk[ch-'a']=1;
        }
        int c=1;
        for(int i=0;i<vtk.size();i++)
        {
            c=c*vtk[i];
        }
        if(c)
            return true;
        else
            return false;
        
    }
};