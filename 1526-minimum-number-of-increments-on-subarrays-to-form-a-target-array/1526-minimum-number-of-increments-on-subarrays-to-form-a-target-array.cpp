class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int ans=target[0];
        for(int i=1;i<target.size();i++){
            if(target[i-1]<target[i]) ans+=target[i]-target[i-1];
        }
        return ans;
    }
};