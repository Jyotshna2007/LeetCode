class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>chum;
        for(auto s:strs){
            string pum=s;
            sort(pum.begin(),pum.end());
            chum[pum].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto i:chum){
            ans.push_back(i.second);
        }
        return ans;
    }
};