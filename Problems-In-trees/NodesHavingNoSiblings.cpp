class solution
{
  void recursion(Node* root , vector<int>& ans){
    if(root == NULL) return;
    
    if(root->left==NULL && root->right != NULL){
        ans.push_back(root->right->data);
        recursion(root->right,ans);
    }
    else if(root->left != NULL && root->right == NULL){
        ans.push_back(root->left->data);
        recursion(root->left,ans);
    }
    else{
        recursion(root->left,ans);
        recursion(root->right,ans);
    }
    return ;
  }
  vector<int> noSibling(Node* node)
  {
    vector<int>ans;
    recursion(node,ans);
    if(ans.size() == 0) return {-1};
    sort(ans.begin(),ans.end());
    return ans;
  }
};
