class Solution {
public:
    void dfs(TreeNode* root , int level , int& deplevel , int& sum){
         
        if(level == deplevel) sum+=root->val;
        if(level > deplevel){
            deplevel = level ;
            sum = root->val;
        }
        if(root->left) dfs(root->left,level+1,deplevel,sum);
        if(root->right) dfs(root->right,level+1,deplevel,sum);
    }
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        int deplevel = 0;
        dfs(root,0,deplevel,sum);
        return sum ;
    }
};
