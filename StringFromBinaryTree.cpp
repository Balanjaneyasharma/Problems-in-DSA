class Solution {
public:
    void recursion(TreeNode* root,string & ans){
        if(root == NULL) return;
        ans+=to_string(root->val);
        if(root->left != NULL){
            ans+='(';
            recursion(root->left,ans);
            ans+=')';
        }
        if(root->right!=NULL){
            if(root->left == NULL){
                ans+='(';
                ans+=')';
            }
            ans+='(';
            recursion(root->right,ans);
            ans+=')';
        }
        
    }
    string tree2str(TreeNode* root) {
        string ans = "";
        recursion(root,ans);
        return ans;
        
    }
};
