class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your
       queue<Node* > q;
       q.push(root);
       while(!q.empty()){
           int size = q.size();
           for(int i = 0 ; i < size ; i++){
               Node* node = q.front();
               q.pop();
               if(i == size - 1) node->nextRight = NULL;
               else node->nextRight = q.front();
               
               cout<<"";
               if(node->left!= NULL) q.push(node->left);
               if(node->right != NULL) q.push(node->right);
           }
       }
    }    
      
};
