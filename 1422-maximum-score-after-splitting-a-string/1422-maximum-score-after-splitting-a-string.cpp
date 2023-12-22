class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        vector<int> pre(n,0),suff(n,0);
        pre[0]=(s[0]=='0');suff[n-1]=(s[n-1]=='1');
        int maxi=pre[0]+suff[n-1];
        for(int i=1;i<n-1;++i){
            pre[i]=pre[i-1]+(s[i]=='0'?1:0);
            
            suff[n-i-1]=suff[n-i]+(s[n-i-1]=='1'?1:0);
            // cout<<pre[i]<<" ";
            // cout<<suff[n-i-1]<<endl;
        }
        for(int i=0;i<n-1;++i){
            maxi=max(maxi,pre[i]+suff[i+1]);
        }
        return maxi;
    }
};