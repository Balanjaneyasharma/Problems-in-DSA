class Solution {
public:
    ListNode* myHead =new ListNode();
    int size = 0;
    Solution(ListNode* head) {
        myHead = head;
        ListNode* temp = head;
        while(temp != NULL){
            size += 1;
            temp = temp->next;
        }
    }
    int getRandom() {
        ListNode* temp = myHead;
        int ra = rand()%size;
        while(ra--){
            temp = temp->next;
        }
        return temp->val;
    }
};
