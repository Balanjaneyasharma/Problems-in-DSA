class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size =0;
        while(temp != NULL){
            size+=1;
            temp = temp->next;
        }
        int pos = (size/2)+1;
        temp = head;
        int count = 0;
        while(temp != NULL){
            count += 1;
            if(count == pos) return temp;
            temp = temp->next;
        }
        return temp;
    }
};
