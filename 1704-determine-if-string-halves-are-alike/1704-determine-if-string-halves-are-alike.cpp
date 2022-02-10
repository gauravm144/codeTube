class Solution {
public:
    bool halvesAreAlike(string s) {
        // unordered_map<char,int> s1;
        int s1=0;
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
              s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                s1+=1;
        }
        // cout<<endl;
         for(int i=s.size()/2;i<s.size();i++)
         {
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
              s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                s1-=1;
         }
         bool flag=true;
            // for(auto it=s1.begin();it!=s1.end();it++)
            // {
            //     if(it->second>0){
            //         flag=false;
            //     break;}
            //     // cout<<it->first<<"->"<<it->second<<endl;
            // }
        if(s1!=0)
            flag=false;
        return flag;
        
    }
};