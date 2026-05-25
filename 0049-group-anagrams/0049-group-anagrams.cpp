class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> s;
        for (string p : strs) {
            string temp = p;
            sort(temp.begin(), temp.end()); // aet
            s[temp].push_back(p);           // aet-- ate,eat,tea
        }
        for (auto x : s) {
            ans.push_back(x.second);
        }
        return ans;
    }
};