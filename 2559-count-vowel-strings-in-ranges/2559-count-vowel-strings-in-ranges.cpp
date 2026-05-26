class Solution {
public:
    bool isvowel(char a) {
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    }
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> prefix(words.size(), 0);
        for (int i = 0; i < words.size(); i++) {
            string q = words[i];
            if (isvowel(q[0]) && isvowel(q[q.size() - 1])) {
                prefix[i] = 1;
            }
            if (i > 0) {
                prefix[i] = prefix[i] + prefix[i - 1];
            }
        }
        for (int i = 0; i < queries.size(); i++) {
            int j = queries[i][0];
            int k = queries[i][1];
            if (j == 0)
                ans.push_back(prefix[k]);
            else
                ans.push_back(prefix[k] - prefix[j - 1]);
        }
        return ans;
    }
};