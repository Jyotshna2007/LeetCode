class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int maxi=INT_MIN;
        for(int i=energy.size()-1;i>=0;i--){
            if(i+k<energy.size()){
                energy[i]+=energy[i+k];
            }
            maxi=max(maxi,energy[i]);
        }
        return maxi;
    }
};