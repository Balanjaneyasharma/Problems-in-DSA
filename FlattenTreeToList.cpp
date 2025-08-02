class Solution {
public:
    
    void flatten(TreeNode* root) {
        if(root == NULL || root->left == NULL && root->right == NULL ) return;
        
        if(root->left != NULL){
            TreeNode* right = root->right;
            root->right = root->left;
            root->left = NULL;
            TreeNode* tail = root->right ;
            while(tail->right != NULL){
                tail = tail->right;
            }
            tail->right = right;
        }
        flatten(root->right);
        
        
    }
};
