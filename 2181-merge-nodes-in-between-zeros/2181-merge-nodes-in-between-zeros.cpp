/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head->next;
        int sum = 0;
        while (temp != NULL) {
            if (temp->val == 0) {
                ans.push_back(sum);
                sum = 0;
            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }
        ListNode* s = new ListNode(0);
        ListNode* tail = s;
        for (int i : ans) {
            tail->next = new ListNode(i);
            tail = tail->next;
        }
        return s->next;
    }
};