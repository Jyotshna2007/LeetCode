class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        for (int i = 0; i < word.size(); i++) {
            char a = word[i];
            if (a >= 'A' && a <= 'Z') {
                cnt++;
            }
        }
        char a = word[0];
        int flag = 0;
        if (a >= 'A' && a <= 'Z')
            flag = 1;
        if (cnt == word.size() || cnt == 0 || (flag == 1 && cnt == 1)) {
            return true;
        } else
            return false;
    }
};