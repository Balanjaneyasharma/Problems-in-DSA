class Solution {
public:
    bool flg = false;
    void checkPath(TreeNode* root,int sum ,int target){
        if(flg == true) return;
        else if(root == NULL) return;
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            if (sum == target) {
                flg = true;
                return;
            }
        }
        else{
            checkPath(root->left,sum,target);
            checkPath(root->right,sum,target);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        checkPath(root,0,targetSum);
        return flg;
    }
};
