class Solution {
public:
    void checkPath(TreeNode* root,int sum ,vector<int>& ds,vector<vector<int>>& ans,int target){
        if(root == NULL) return;
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            if (sum == target) {
                ds.push_back(root->val);
                ans.push_back(ds);
                ds.pop_back();
                return;
            }
        }
        else{
            ds.push_back(root->val);
            checkPath(root->left,sum,ds,ans,target);
            checkPath(root->right,sum,ds,ans,target);
            ds.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>ds;
         checkPath(root,0,ds,ans,targetSum);
        return ans;
    }
};
