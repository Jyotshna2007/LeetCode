class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size=nums1.size()+nums2.size();
        int i=0,j=0,res[size],k=0;
        while(i<nums1.size() && j<nums2.size()){
  if(nums1[i]<nums2[j]){
    res[k++]=nums1[i++];
  }
  else{
    res[k++]=nums2[j++];
  }
        }
        while(i<nums1.size()){
            res[k++]=nums1[i++];
        }
        while(j<nums2.size()){
            res[k++]=nums2[j++];
        }
  if(size%2==0){
    return (res[(size/2)-1]+res[size/2])/2.0;
  }
  else{
    return res[size/2];
  }
    }
};