class Solution {
public:
    void Combinations(int ind,int n,int k ,vector<int>& ds,vector<vector<int>>&ans){
        if(ds.size()==k){
            ans.push_back(ds);
            return ;
        }
        if(ind>=n) return ;
        ds.push_back(ind+1);
        Combinations(ind+1,n,k,ds,ans);
        ds.pop_back();
        Combinations(ind+1,n,k,ds,ans);
    }
        
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>ds;
        Combinations(0,n,k,ds,ans);
        return ans;
        
    }
};
