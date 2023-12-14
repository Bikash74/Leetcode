class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int> oneRow(n,0),oneColumn(m,0);
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                oneRow[i]+=(grid[i][j]==1);
                oneColumn[j]+=(grid[i][j]==1);
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                grid[i][j]=2*oneRow[i]+2*oneColumn[j]-m-n;
            }
        }
        return grid;
    }
};