class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(char c:s){
            if(c=='('){
                st.push(0);
            }
            else{
                int p=st.top();
                st.pop();
                int cnt;
                if(p==0) cnt=1;
                else cnt=2*p;
                st.top()+=cnt;
            }
        }
          return st.top();
    }
};