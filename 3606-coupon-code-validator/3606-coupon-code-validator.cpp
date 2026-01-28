class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
        int n = code.size();
        vector<pair<string, string>> validco;
        unordered_set<string> allowed = {"electronics", "grocery", "pharmacy",
                                         "restaurant"};
        for (int i = 0; i < n; i++) {
            if (!isActive[i])
                continue;
            if (allowed.find(businessLine[i]) == allowed.end())
                continue;
            if (code[i].empty())
                continue;
            bool valid = true;
            for (char c : code[i]) {
                if (!isalnum(c) && c != '_') {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                validco.push_back({businessLine[i], code[i]});
            }
        }
        unordered_map<string, int> order = {
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3},
        };
        sort(validco.begin(), validco.end(), [&](auto& a, auto& b) {
            if (order[a.first] != order[b.first]) {
                return order[a.first] < order[b.first];
            }
            return a.second < b.second;
        });
        vector<string> res;
        for (auto& [key, val] : validco) {
            res.push_back(val);
        }
        return res;
    }
};