class Solution {
    int count=0;
public:
    void checkNode(TreeNode* root){
        if(root==NULL) return;
        count+=1;
        checkNode(root->left);
        checkNode(root->right);
        
    }
    int countNodes(TreeNode* root) {
        checkNode(root);
        return count;
    }
};
