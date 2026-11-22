class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string>ans;
        int al=0,b=0;
        for(int i=0;i<rain.size();i++){
            if(rain[i]==1 && i+1<rain.size() && rain[i+1]==1){
                if(b<al){
                    ans.push_back("Bob");
                    b++;
                }
                else{
                ans.push_back("Alice");
                  al++;
                }
            }
            else if(rain[i]==1){
                ans.push_back("Bob");
                b++;
            }
            else if(rain[i]==0){
                ans.push_back("None");
            }
        }
        return ans;
    }
};