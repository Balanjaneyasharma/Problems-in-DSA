class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // if it is singular or empty list just return it
        if(head == NULL|| head->next == NULL) return head;
        ListNode* temp = head ;
        int size = 0 ;
        while(temp != NULL){
            size += 1;
            temp = temp->next;
        }
        // to avoid unnecessary  times of rotations
        k = k%size;
        if(size == 2){
            if(k == 1){
                // in that case we just need to reverse the list
                head->next->next = head;
                head = head->next;
                head->next->next = NULL;
                return head;
            }
            // return as it is
            else return head;
        }
        else if(size > 2){
            while(k --) {
                temp = head ;
                while(temp->next->next != NULL) {
                    // finding n-1 last node;
                    temp = temp->next;
                }
                // modifying last node next to point present head;
                temp->next->next = head;
                // modifying head to new head;
                head = temp->next;
                // modifying last n-1 node as last node
                temp->next = NULL;
            }
        }
        return head ;
    }
};
