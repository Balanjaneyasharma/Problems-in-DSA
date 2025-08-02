class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return dfs(root)!=-1;
        
    }
    int dfs(Node*root){
        if(root==NULL) return 0;
        int lh= dfs(root->left);
        if(lh==-1) return -1;
        int rh = dfs(root->right);
        if(rh==-1) return -1;
        if(abs(rh-lh)>1) return -1;
        return 1+max(lh,rh);
    }
};
