class Solution {
public:
    int get1(vector<vector<string>>& items, string ruleValue)
    {
        int count=0;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][0]==ruleValue)
                count++;
        }
        return count;
    }
     int get2(vector<vector<string>>& items, string ruleValue)
    {
        int count=0;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][1]==ruleValue)
                count++;
        }
        return count;
    }
     int get3(vector<vector<string>>& items, string ruleValue)
    {
        int count=0;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][2]==ruleValue)
                count++;
        }
        return count;
    }
    
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=0,count=0;
        if(ruleKey=="type")
            n=1;
        if(ruleKey=="color")
            n=2;
        if(ruleKey=="name")
            n=3;
       
            switch(n)
            {
                case 1:
                    count=get1(items,ruleValue);
                    break;
                case 2:
                    count=get2(items,ruleValue);
                    break;
                case 3:
                    count=get3(items,ruleValue);
                    break;
            }
        return count;
            
        
        
    }
};