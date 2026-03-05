class Solution {
public:
    int minOperations(string s) {
        int f1 = 0, f2 = 0;
        for (int i = 0; i < s.size(); i++) {
            char a = (i % 2 == 0) ? '0' : '1';
            char b = (i % 2 == 0) ? '1' : '0';
            if (s[i] != a)
                f1++;
            if (s[i] != b)
                f2++;
        }
        return min(f1, f2);
    }
};