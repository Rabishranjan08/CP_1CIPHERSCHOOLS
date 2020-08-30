class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL) return NULL;
        vector<int>v;
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp= temp->next;
        }
        //sort(begin(data), end(data));
        sort(v.begin(),v.end());
        temp = head;
        for (const auto &n: v) {
            temp->val = n;
            temp = temp->next;
        }
        return head;
    }
};
