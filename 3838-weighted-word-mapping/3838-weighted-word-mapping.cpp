class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for (string& i : words) {
            int sum = 0;
            for (char c : i) {
                sum += weights[c - 'a'];
            }
            int m = sum % 26;
            char ans = 'z' - m;
            res += ans;
        }
        return res;
    }
};