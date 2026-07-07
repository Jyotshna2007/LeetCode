class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n), p = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0')
                p += s[i];
        }
        if (p == "")
            return 0;
        int h = stoi(p);
        int x = h;
        int sum = 0;
        while (h) {
            sum += h % 10;
            h /= 10;
        }
        return 1LL * x * sum;
    }
};