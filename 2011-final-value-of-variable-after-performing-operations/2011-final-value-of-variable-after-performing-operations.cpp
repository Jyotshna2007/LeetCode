class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string c:operations){
            if(c=="--X" || c=="X--"){
                x-=1;
            }
            else if(c=="X++" || c=="++X"){
                x+=1;
            }
        }
        return x;
    }
};