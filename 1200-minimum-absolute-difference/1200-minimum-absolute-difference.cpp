class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int diff = INT_MAX;
        for (int i = 1; i < arr.size(); i++) {
            diff = min(diff, arr[i] - arr[i - 1]);
        }
        for (int i = 1; i < arr.size(); i++) {
            vector<int> subArray(2);
            if (arr[i] - arr[i - 1] == diff) {
                subArray[0] = arr[i - 1];
                subArray[1] = arr[i];
                ans.push_back(subArray);
            }
        }
        return ans;
    }
};