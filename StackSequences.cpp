class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j = 0;
        for(int i = 0 ; i < pushed.size(); i ++){
            st.push(pushed[i]);
            // if we need to pop the elemnt we pushed
            while(!st.empty() && st.top() == popped[j]){
                // after popping check back in stack; 
                st.pop();
                j++;
            }
        }
		// if all pop operations are done
        return st.empty();
    }
};
