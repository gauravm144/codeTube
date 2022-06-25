class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.length()>typed.length())
            return false;
        int i=0,j=0,n=name.length(),t=typed.length();
        
        while(i<n&&j<t)
        {
            if(name[i]==typed[j])
            {
                i++;
                j++;
            }
            else if(i>0&&name[i-1]==typed[j])
                j++;
            else
                return false;
        }
        while(j<t)
        {
            if(name[n-1]!=typed[j])
                return false;
            j++;
        }
        return i<n?false:true;
    }
};