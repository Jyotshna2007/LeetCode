class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>s(seq.length());
        int i=0,j=0;
        for(auto &a:seq){
            if(a=='('){
                j++;
                if(j%2==1){
                    s[i]=0;
                }
                else s[i]=1;
            }
            else{
                j--;
                if(j%2==1) s[i]=1;
                else s[i]=0;
            }
            i++;
        }
        return s;
    }
};