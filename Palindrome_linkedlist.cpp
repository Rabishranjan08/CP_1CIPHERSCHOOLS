class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode* temp=head;
        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        while(head){
            int d=s.top();
            s.pop();
            if(head->val!=d)
                    return false;
            head=head->next;
        }
        return true;
        
    }
};
