class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans= new ListNode(0);
        ListNode* ptr= ans;
        while(list1 != NULL && list2 != NULL){
           if(list2->val <= list1->val){
               ptr->next = new ListNode(list2->val);
               ptr = ptr->next;
               list2 = list2->next;
           }
           else{
               ptr->next = new ListNode(list1->val);
               ptr = ptr->next;
               list1 = list1->next;
           }
        }
        while (list1 != NULL){
            ptr->next = new ListNode(list1->val);
            ptr = ptr->next;
            list1 = list1->next;
        }
        while (list2 != NULL){
            ptr->next = new ListNode(list2->val);
            ptr = ptr->next;
            list2 = list2->next;
        }
        
        
        return ans->next;
    }
};
