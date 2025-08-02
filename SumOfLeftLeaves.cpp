class Solution {
public:
    int sum = 0;
    void checkLeft(TreeNode* root){
        if(root==NULL){
            return;
        }
        if(root->left!=NULL){
            if(root->left->left==NULL && root->left->right==NULL){
                sum+=root->left->val;
            }
        }
        checkLeft(root->left);
        checkLeft(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        checkLeft(root);
        return sum;
    }
}
