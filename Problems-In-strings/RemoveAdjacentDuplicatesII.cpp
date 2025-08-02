/*

You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.

We repeatedly make k duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique

Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
Explanation: 
First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"

*/
class Solution {
public:
    string removeDuplicates(string s, int k) {
       stack<pair<char,int> >st;
        for(int i=0;i<s.size();i++){
            if(st.empty()||s[i]!=st.top().first){
                st.push(make_pair(s[i],1));
            }
            else{
                st.top().second++;
                int count=st.top().second;
                if(count==k){
                    st.pop();
                }
            }
        }
        string ans="";
        while(!st.empty()){
            int count=st.top().second;
            while(count--){
                ans.push_back(st.top().first);
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
