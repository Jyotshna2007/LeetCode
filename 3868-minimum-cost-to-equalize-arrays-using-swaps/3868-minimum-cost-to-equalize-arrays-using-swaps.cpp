class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>p=nums1;
        // vector<int>q=nums2;
        // sort(p.begin(),p.end());
        // sort(q.begin(),q.end());
        // if(p==q) return 0;
        map<int, int> chum;
        for (int i : nums1)
            chum[i]++;
        for (int i : nums2)
            chum[i]++;
        for (auto i : chum) {
            if (i.second % 2 != 0)
                return -1;
        }
        map<int, int> s, j;
        for (int i : nums1)
            s[i]++;
        for (int i : nums2)
            j[i]++;
        int ans = 0;
        for (auto i : chum) {
            int x = i.first;
            int req = i.second / 2;
            if (s[x] > req) {
                ans += (s[x] - req);
            }
        }
        return ans;
    }
};