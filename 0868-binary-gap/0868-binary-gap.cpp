class Solution {
public:
    int binaryGap(int n) {
        vector<int> s;
        while (n) {
            s.push_back(n % 2);
            n /= 2;
        }
        vector<int> j;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 1) {
                j.push_back(i);
            }
        }
        vector<int> k;
        for (int i = 0; i < j.size() - 1; i++) {
            k.push_back(j[i + 1] - j[i]);
        }
        if (k.empty())
            return 0;
        int ma = *max_element(k.begin(), k.end());
        return ma;
    }
};