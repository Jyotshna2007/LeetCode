class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     unordered_map<char,int>r;
     unordered_map<char,int>m;
     for(auto i:ransomNote){
        r[i]++;
     }
     for(auto i:magazine){
        m[i]++;
     }
     for(auto i:ransomNote){
        if(m[i]==0){
            return false;
        }
        else if(m[i]>0){
            m[i]--;
        }
     }
      return true;
    }
};