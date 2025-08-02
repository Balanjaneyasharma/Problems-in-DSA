class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dm =0;
        int h=MaxHeight(root,dm);
        return dm;
        
    }
    int MaxHeight(TreeNode* root,int & diameter){
        if(root==NULL) return 0;
        int lh =MaxHeight(root->left,diameter);
        int rh= MaxHeight(root->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }
};
