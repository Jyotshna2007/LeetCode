class Solution {
public:
    void solve(string& exp, vector<int>& ans) {
        for (int j = 0; j < exp.size(); j++) {
            if (exp[j] == '+' || exp[j] == '-' || exp[j] == '*') {
                string left = exp.substr(0, j);
                string right = exp.substr(j + 1);
                int a = stoi(left);
                int b = stoi(right);
                vector<int> l, r;
                solve(left, l);
                solve(right, r);
                for (auto a : l) {
                    for (auto b : r) {
                        if (exp[j] == '+')
                            ans.push_back(a + b);
                        else if (exp[j] == '-')
                            ans.push_back(a - b);
                        else
                            ans.push_back(a * b);
                    }
                }
            }
        }
        if (ans.empty())
            ans.push_back(stoi(exp));
    }
    vector<int> diffWaysToCompute(string exp) {
        vector<int> ans;
        solve(exp, ans);
        return ans;
    }
};