class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current=head;
        ListNode* temp;
        if(head==NULL)
            return NULL ;
        while(current->next!=NULL){
           if(current->val==current->next->val){
               temp=current->next->next;
               delete (current->next);
               current->next=temp;
           } 
            else{
                current=current->next;
            }
        }
        return head;
    }
};
