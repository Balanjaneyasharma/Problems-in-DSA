class Solution {
public:
    void leftBoundary(Node* root,vector<int> & ans){
        if(root->left == NULL) return ;
        Node* cur = root->left;
        while(cur != NULL){
            if(!(isleaf(cur))) ans.push_back(cur->data);
            if(cur->left) cur = cur->left;
            else cur = cur->right;
        }
    }
    void leafNodes(Node* root,vector<int> & ans){
        if(isleaf(root)) {
            ans.push_back(root->data);
            return;
        }
        if(root->left)  leafNodes(root->left,ans);
        if(root->right) leafNodes(root->right,ans);
    }
    void rightBoundary(Node* root,vector<int> & ans){
        if(root->right == NULL) return;
        Node* cur = root->right;
        vector<int>temp;
        while(cur != NULL){
            if(!(isleaf(cur))) temp.push_back(cur->data);
            if(cur->right) cur = cur->right;
            else cur = cur->left;
        }
        int size = temp.size();
        for(int i = size - 1 ; i >= 0 ; i --){
            ans.push_back(temp[i]);
        }
    }
    bool isleaf(Node* root){
        if(root != NULL && root->left == NULL && root->right == NULL) return true;
        return false;
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(!root) return ans;
        if(!(isleaf(root))) ans.push_back(root->data);
        leftBoundary(root,ans);
        leafNodes(root,ans);
        rightBoundary(root,ans);
        return ans;
    }
};
