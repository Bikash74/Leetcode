class Solution {
public:
    int dp[205][205];
    int f(int i,int j,vector<vector<int>>& dungeon,int n,int m){
        if(i>=n) return 1e9;
        if(j>=m) return 1e9;
        if(i==n-1&&j==m-1) {
            if(dungeon[i][j]<0) return abs(dungeon[i][j])+1;
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
       int a=f(i+1,j,dungeon,n,m);int b=f(i,j+1,dungeon,n,m);
        return dp[i][j]=max(1,min(a,b)-dungeon[i][j]);
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n=dungeon.size(),m=dungeon[0].size();
        for(int i=0;i<n+2;++i){
            for(int j=0;j<m+2;++j){
                dp[i][j]=-1;
            }
        }
        return f(0,0,dungeon,n,m);
    }
};