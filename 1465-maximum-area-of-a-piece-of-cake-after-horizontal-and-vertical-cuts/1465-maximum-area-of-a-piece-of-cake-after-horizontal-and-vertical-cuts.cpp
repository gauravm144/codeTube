class Solution {
public:
    int max(int a,int b)
    {
        return a>=b?a:b;
    }
    int maxArea(int h, int w, vector<int>& hC, vector<int>& vC) {
        
        sort(hC.begin(),hC.end());
        sort(vC.begin(),vC.end());
        
        long hmx=0;
        
        for(int i=1;i<hC.size();i++)
        {
            hmx=max(hmx,hC[i]-hC[i-1]);
        }
        hmx=max(hmx,hC[0]-0);
        hmx=max(hmx,h-hC[hC.size()-1]);
        
        long vmx=0;
        
        for(int i=1;i<vC.size();i++)
        {
            vmx=max(vmx,vC[i]-vC[i-1]);
        }
        vmx=max(vmx,vC[0]-0);
        vmx=max(vmx,w-vC[vC.size()-1]);
        
        long res=hmx*vmx;
        long ans=pow(10,9)+7;
        ans=res%ans;
        return (int)ans;
    }
};