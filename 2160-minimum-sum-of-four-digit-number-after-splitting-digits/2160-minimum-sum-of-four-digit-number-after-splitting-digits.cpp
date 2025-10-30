class Solution {
public:
    int minimumSum(int num) {
        vector<int>chum;
     while(num>0){
        chum.push_back(num%10);
        num=num/10;
     }
     sort(chum.begin(),chum.end());
     int pum=chum[0]*10+chum[2]  ;
     int jum=chum[1]*10+chum[3];
     return pum+jum;
  }
};