class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans=-1e9;
        for(int i=0;i<prices.size();++i){
            for(int j=i+1;j<prices.size();++j)
            {
                if(prices[i]+prices[j]<=money){
                    ans=max(ans,money-prices[i]-prices[j]);
                }
            }
        }
        if(ans==-1e9) return money;
        return ans;
    }
};