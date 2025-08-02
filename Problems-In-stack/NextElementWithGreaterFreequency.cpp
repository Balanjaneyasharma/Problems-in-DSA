class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        stack<int>st;
        st.push(arr[n-1]);
        vector<int>ans(n,-1);
        for(int i = n-2; i>=0;i--){
            while(!st.empty() and mpp[st.top()]<=mpp[arr[i]]) st.pop();
            if(!st.empty() and mpp[st.top()]>mpp[arr[i]]){
                ans[i]=st.top();
            }
            st.push(arr[i]);
        }
        return ans;
    }
}
