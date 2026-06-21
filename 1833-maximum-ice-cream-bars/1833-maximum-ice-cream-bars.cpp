class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        long long sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(sum+costs[i]<=coins){
                 cnt++;
                sum+=costs[i];
               
            }
            else{
                break;
            }
        }
        return cnt;
    }
};