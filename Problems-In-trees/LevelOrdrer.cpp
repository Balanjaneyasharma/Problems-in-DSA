class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      if(node==NULL){
          return ans;
      }
      queue<Node*>q;
      q.push(node);
      while(!q.empty()){ 
          int size1 = q.size();
          for(int i=0;i<size1;i++){// for each level  
              Node * node1 = q.front();
              q.pop();
              if(node1->left!=NULL) q.push(node1->left);
              if(node1->right != NULL) q.push(node1->right);
              ans.push_back(node1->data);
          }
          
      }
      return ans;
    }
};
