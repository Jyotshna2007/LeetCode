class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long cnt=1,ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]-prices[i]==1) cnt++;
            else {
                ans+=(cnt+1)*cnt/2;
                cnt=1;
            }
        }
         ans+=(cnt+1)*cnt/2;
        return ans;
    }
};