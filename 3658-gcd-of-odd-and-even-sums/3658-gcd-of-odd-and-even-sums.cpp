class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n * n;
        int even = n * n + n;
        return __gcd(odd, even);
    }
};