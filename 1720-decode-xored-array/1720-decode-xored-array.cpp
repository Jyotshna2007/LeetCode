class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>chum;
        chum.push_back(first);
        for(int i=0;i<encoded.size();i++){
            chum.push_back(chum.back()^encoded[i]);
        }
        return chum;
    }
};