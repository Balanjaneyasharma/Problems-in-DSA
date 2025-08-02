class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        if(root == NULL) return root;
        TreeNode* root1 = root;
        int sum = 0;
        int leftSum = 0 ;
        preorder(root1,sum);
        root1 = root;
        preorder(root1,sum,leftSum);
        return root;
    }
     void preorder(TreeNode* root,int& sum){
       if(root == NULL) return;
       preorder(root->left,sum);
       sum = sum += root->val;
       preorder(root->right,sum);
    }
    void preorder(TreeNode*root,int sum , int& leftSum){
        if(root == NULL) return;
        
        preorder(root->left,sum,leftSum);
        // looking its previous sum and updating for next nodes
        leftSum = leftSum + root->val;
        root->val = sum - (leftSum-root->val) ;
        preorder(root->right,sum,leftSum);
    }
}
