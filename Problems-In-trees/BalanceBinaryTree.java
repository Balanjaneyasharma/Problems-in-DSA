class Solution {
    public int dfs(TreeNode root){
        if(root == null) return 0;
        int lhs = dfs(root.left);
        if(lhs == -1) return -1;
        int rhs = dfs(root.right);
        if(rhs == -1) return -1;
        if(Math.abs(rhs - lhs) > 1) return -1;
        return Math.max(lhs,rhs) + 1;
    }
    public boolean isBalanced(TreeNode root) {
        return dfs(root)!=-1;
    }
}
