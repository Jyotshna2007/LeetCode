class Solution {
public:
string to_bin(int n){
    string res="";
    if (n == 0)
            return "0";
        while (n) {
            res += (n % 2) + '0';
            n /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
}
    int findComplement(int num) {
        string r = to_bin(num);
        for (int i = 0; i < r.size(); i++) {
            if (r[i] == '0')
                r[i] = '1';
            else
                r[i] = '0';
        }
        int ans = 0;
        for (int i = 0; i < r.size(); i++) {
            ans = ans * 2 + (r[i] - '0');
        }
        return ans;
    }
};