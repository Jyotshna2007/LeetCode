class Solution {
public:
    int numberOfSpecialChars(string word) {
      int cnt=0;
      unordered_map<char,int>mp;
      for(auto i:word) mp[i]++;
      for(int i=0;i<word.size();i++){
        char s=word[i];
        if(s>='a'&&s<='z'){
        if(mp[s-32]>0){
            cnt++;
            mp[s]=0;
            mp[s-32]=0;
        }
      }
      else if(s>='A'&&s<='Z'){
        if(mp[s+32]>0){
            cnt++;
            mp[s]=0;
            mp[s+32]=0;
        }
      }
      }
      return cnt;
    }
};