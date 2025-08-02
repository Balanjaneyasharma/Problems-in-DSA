class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n = tokens.size();
        for(int i = 0 ;  i < n ; i++){
            if(tokens[i]!= "+" && tokens[i]!= "-" && tokens[i]!= "*" && tokens[i]!= "/"){
                st.push(stoi(tokens[i]));
                continue;
            }
            else{
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int result;
                if(tokens[i] == "+" ){
                        st.push(n1+n2);
                }
                else if(tokens[i] == "-" ){
                        st.push(n2-n1);
                }
                else if(tokens[i] == "*" ){
                        st.push((long long )n1 * n2);
                }
                else if(tokens[i] =="/" ){
                        st.push(n2/n1);
                }
            }
        }
        return st.top();
        return 23;
    }
};
