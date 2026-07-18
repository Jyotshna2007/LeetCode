class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int n=num_people;
        vector<int>ans(n,0);
        int g=1;
        int i=0;
        while(candies>0){
            ans[i%n]+=min(g,candies);
            candies-=min(g,candies);
            g++;
            i++;
        }
        return ans;
    }
};