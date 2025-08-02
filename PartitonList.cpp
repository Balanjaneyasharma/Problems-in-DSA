class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL) return head;
        ListNode* Lh = NULL ;
        ListNode* Lt = NULL ;
        ListNode* Mh = NULL ;
        ListNode* Mt = NULL;
        while(head != NULL){
            if(head->val < x){
                if(Lh == NULL){
                    Lh = head;
                    Lt = head;
                }
                else{
                    Lt->next = head;
                    Lt = head;
                }
            }
            else{
                if(Mh == NULL){
                    Mh = head;
                    Mt = head;
                }
                else{
                    Mt->next = head;
                    Mt = head;
                }
            }
            head = head->next;
        }
        if(Lt != NULL) Lt->next = NULL;
        if(Mt != NULL) Mt->next = NULL;
        
        if(Lh == NULL && Mh != NULL){
            return Mh;
        }
        Lt->next = Mh;
        return Lh;
        
    }
};
