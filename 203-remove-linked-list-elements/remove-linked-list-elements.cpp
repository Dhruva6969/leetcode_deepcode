class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* list = new ListNode(0);
        list->next = head;
        ListNode* current = list;

        while(current->next !=nullptr){
            if(current->next->val==val){
                current->next=current->next->next;
            }
            else{
                current=current->next;
            }
        }
        return list->next;
    }
};