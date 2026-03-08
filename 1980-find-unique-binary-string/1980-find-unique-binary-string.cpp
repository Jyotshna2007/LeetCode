class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string s = "";
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i][i] == '1')
                s += '0';
            else
                s += '1';
        }
        return s;
    }
};