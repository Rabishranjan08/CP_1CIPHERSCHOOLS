class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
	if (head) {
		stack<pair<int, int>> s;  
		int i = 0;
		while (head) {
			while (!s.empty() && head->val > s.top().first) {
				ans[s.top().second] = head->val;
				s.pop();
			}
			s.push({head->val, i++});
			ans.push_back(0);
			head = head->next;
		}
	}
	return ans;
    }
};
