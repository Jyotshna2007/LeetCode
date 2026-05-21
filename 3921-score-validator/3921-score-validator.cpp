class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0;
        int cnt=0;
        for(int i=0;i<events.size();i++){
            if(events[i]=="W"){
                cnt++;
                if(cnt==10) return {score,cnt};
            }
           else if(events[i]=="WD" || events[i]=="NB") score++;
           else score+=stoi(events[i]);    
        }  
        return {score,cnt};
  }
};