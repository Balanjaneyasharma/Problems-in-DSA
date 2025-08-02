class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int maxi = INT_MIN;
            for(int i = 0; i < size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                maxi = max(maxi,node->val);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
