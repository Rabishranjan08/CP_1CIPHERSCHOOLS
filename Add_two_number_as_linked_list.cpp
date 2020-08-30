class Solution {
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
    ListNode *res=NULL;
    ListNode *temp=NULL;
    ListNode *prev=NULL;
    int sum,carry=0;
    while(first||second){
        sum=carry+(first?first->val:0)+(second?second->val:0);
        carry=(sum>=10)?1:0;
        sum=sum%10;
        temp=new ListNode(sum);
       // temp->data=sum;
        if(res==NULL){
            res=temp;
        }
        else{
            prev->next=temp;
        }
        prev=temp;
        if(first){
            first=first->next;
        }
        if(second){
            second=second->next;
        }
        
    }
    if(carry){
        temp->next=new ListNode(carry);
        //temp->next->data=carry;
    }
    return res;
    }
};
