class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> s;
        for(int i:nums) s[i]++;
        for(int i:nums){
            if(i%2==0 && s[i]==1) return i;
        }
        return -1;
    }
};