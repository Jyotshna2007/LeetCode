class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices[0];
        int p=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]<s){
                s=prices[i];
            }
            else if(prices[i]-s>p){
                p=prices[i]-s;
            }
        }
        return p;
    }
};