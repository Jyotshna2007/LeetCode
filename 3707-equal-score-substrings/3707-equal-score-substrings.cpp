class Solution {
public:
    bool scoreBalance(string s) {
        vector<int>h;
        for(int i=0;i<s.size();i++){
            h.push_back(s[i]-'a'+1);
        }
    int sum=0;
    for(int i=0;i<h.size();i++) sum+=h[i];
   int chum=0;
        for(int i=0;i<h.size()-1;i++){
            chum+=h[i];
            if(chum==(sum-chum)) return true;
        }
return false;
}
};