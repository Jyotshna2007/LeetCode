class Solution {
public:
    bool hasAlternatingBits(int n) {
        int s = n;
        vector<int> arr;
        while (s) {
            int r = s % 2;
            arr.push_back(r);
            s = s / 2;
        }
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
};