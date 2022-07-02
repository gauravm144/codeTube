class Solution {
public:
    long max(long a,long b)
    {
        if(a>=b)
            return a;
        else 
            return b;
    }
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        
        long maxh=0;
        if(hc.size()==1)
        {
            maxh=max(hc[0],h-hc[0]);
            cout<<maxh;
        }
        else
        for(long i=1;i<hc.size();i++)
        {
            maxh=max(maxh,hc[i]-hc[i-1]);
        }
        maxh=max(maxh,h-hc[hc.size()-1]);
        maxh=max(maxh,hc[0]);
        
        long maxv=0;
        if(vc.size()==1)
        {
            maxv=max(vc[0],w-vc[0]);
        }
        else
        for(long i=1;i<vc.size();i++)
        {
            maxv=max(maxv,vc[i]-vc[i-1]);
        }
        maxv=max(maxv,w-vc[vc.size()-1]);
        maxv=max(maxv,vc[0]);
        long tmp=maxh*maxv;
        long tt=pow(10,9);
        tt+=7;
        tmp=tmp%tt;
        return (int)tmp;
    }
};
