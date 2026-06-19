class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int s=0,maxi=0;
      for(int g:gain){
        s+=g;
        maxi=max(maxi,s);
      }
      return maxi;
    }
};