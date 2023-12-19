class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int sum=0,cnt=0;
                for(int k=-1;k<=1;++k){
                    for(int l=-1;l<=1;++l){
                        int ni=i+k,nj=j+l;
                        if(ni>=0&&ni<n&&nj>=0&&nj<m){
                            cnt++;
                            sum+=img[ni][nj];
                        }
                    }
                }
                ans[i][j]=sum/cnt;
            }
        }
        return ans;
    }
};