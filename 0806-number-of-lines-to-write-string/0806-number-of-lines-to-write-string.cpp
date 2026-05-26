class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int cnt = 1;
        vector<int> p;
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            int chum = sum;
            sum += widths[a - 'a'];
            if (sum > 100) {
                p.push_back(chum);
                cnt++;
                sum = widths[a - 'a'];
            }
        }
        p.push_back(sum);
        return {cnt, p[p.size() - 1]};
    }
};