class Solution {
public:
bool non(const vector<int>& nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]) return false;
    }
    return true;
}
    int minimumPairRemoval(vector<int>& nums) {
      int o=0;
      while(!non(nums)){
        int id=-1;
        int chum=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
           int sum=nums[i]+nums[i+1];
            if(sum<chum){
         chum=sum;
         id=i;
            }
        }
                    nums[id]=nums[id]+nums[id+1];
        nums.erase(nums.begin()+id+1);
        o++;
      } 
    return o;
    }
};