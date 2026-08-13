class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=prices[0],ans=0;
        for(int i=0;i<prices.size();i++){
            if(sum>prices[i]) sum=prices[i];
            if(prices[i]-sum>ans) ans=prices[i]-sum;
        }
        return ans;
    }
};
