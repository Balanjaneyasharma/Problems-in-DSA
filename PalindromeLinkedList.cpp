class Solution{
  public:
  Node* cur ;
  int val = 0;
    //Function to check whether the list is palindrome.
    void recursion(Node* head){
        if(head == NULL) return;
        if(val == 1)  return;
        if(head!=NULL){
            recursion(head->next);
        }
        if(head->data != cur->data){
            val = 1;
            return;
        }
        cur = cur->next;
        return;
    }
    bool isPalindrome(Node *head)
    {
        cur = head;
        recursion(head);
        return (val != 1);
        
    }
}
