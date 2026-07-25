class Solution {
public:
    int maxProduct(int n) {
        vector<int>chum;
        while(n){
            chum.push_back(n%10);
            n/=10;
        }
        sort(chum.rbegin(),chum.rend());
        return chum[0]*chum[1];
    }
};