class Solution {
public:
    int count = 0 ; 
    void recursion(TreeNode* root,int maxi){
        if(root->val >= maxi){
            count++;
            maxi = max(maxi,root->val);
        }
        if(root->left != NULL) recursion(root->left,maxi);
        if(root->right != NULL) recursion(root->right,maxi);
    }
    int goodNodes(TreeNode* root) {
        recursion(root,root->val);
        return count;
    }
};
