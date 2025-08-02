class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToright=true;
        while(!q.empty()){
            int size = q.size();
            vector<int>row(size);
            for(int i =0;i<size;i++){
                TreeNode * node = q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                int index = leftToright ? i : (size-i-1);
                row[index]=node->val;
            }
            leftToright=!leftToright;
            ans.push_back(row);
        }
        return ans;
    }
};
