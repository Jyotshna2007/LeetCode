class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int chum = 0;
        for (int i = left; i <= right; i++) {
            int s = i, cnt = 0;
            while (s) {
                int r = s % 2;
                if (r == 1)
                    cnt++;
                s = s / 2;
            }
            if (cnt == 2 || cnt == 3 || cnt == 5 || cnt == 7 || cnt == 11 ||
                cnt == 13 || cnt == 17 || cnt == 19) {
                chum++;
            }
        }
        return chum;
    }
};