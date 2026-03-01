class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        //  unordered_map<int, int> s;
        int sum = 0;
        for (int i : derived)
            sum ^= i;
        return sum == 0;
    }
};