class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string>words;
        stringstream ss(title);
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        string ans="";
        for(int i=0;i<words.size();i++){
            string a=words[i];
                for(int j=0;j<a.size();j++){
                    if(a.size()<3){
                        ans+=tolower(a[j]);
                    }
                    else{
                        if(j==0) ans+=toupper(a[j]);
                        else ans+=tolower(a[j]);
                    }
                }
                if(i<words.size()-1){
                    ans+=" ";
                } 
        }
      return ans;
    }
};