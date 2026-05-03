class Solution {
public:
    bool rotateString(string s, string goal) {
      if(s.size()!=goal.size()) return false;
      string p=s+s;
      bool ans=false;
      if(p.find(goal)!=string::npos) ans=true;
      else ans=false;
      return ans;
    }
};