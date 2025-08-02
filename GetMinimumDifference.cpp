class Solution {
public:
    /*void recursion(TreeNode* root,vector<int>& ans){
        if(root == NULL) return ;
        recursion(root->left,ans);
        ans.push_back(root->val);
        recursion(root->right,ans);
    }*/
    TreeNode* prev = NULL;
    int ans = INT_MAX;
    void myRecursive(TreeNode* root){
        if(root == NULL){
            return;
        }
        myRecursive(root->left);
        if(prev!=NULL){
            ans = min(ans,abs(prev->val-root->val));
        }
        prev = root;
        myRecursive(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>tree;
        myRecursive(root);
        return ans;
        /*recursion(root,tree);
        int mini = INT_MAX;
        for(int i = 1 ; i < tree.size() ; i ++){
            mini = min(mini, abs(tree[i] - tree[i-1]));
        }
        return mini;*/
    }
};
