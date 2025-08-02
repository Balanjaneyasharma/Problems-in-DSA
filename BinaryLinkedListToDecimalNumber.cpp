class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int size = 0;
        int ans = 0;
        ListNode* temp = head;
        while(temp  != NULL){
            size += 1;
            temp = temp->next;
        }
        size =size -1;
        temp = head;
        while(temp != NULL){
            ans = ans + (temp->val * pow(2,size));
            size = size - 1;
            temp = temp->next;
        }
        return ans;
    }
};
