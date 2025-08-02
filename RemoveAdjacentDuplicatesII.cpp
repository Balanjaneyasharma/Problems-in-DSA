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
