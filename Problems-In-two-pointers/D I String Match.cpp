class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans(s.size()+1);
        int low=0,high = s.size(),k=0;        
        for(int i =0;i<s.size();i++){
            if(s[i]=='D'){
                ans[k++]=high--;
            }
            else{
                ans[k++]=low++;
            }
        }
        ans[k++]=high--;
        return ans;
    }
};
