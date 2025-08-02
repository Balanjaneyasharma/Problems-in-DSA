class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        vector<char>ans;
        int count =0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]){}
            else{
                count++;
                ans.push_back(s1[i]);
                ans.push_back(s2[i]);
            }
        }
        int n= ans.size();
        if(count==2){
            if(ans[0]==ans[n-1]){
                if(ans[1]==ans[n-2]){
                    return true;
                }
            }
        }
        return false;
    }
};
