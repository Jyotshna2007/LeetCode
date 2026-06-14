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
    int pairSum(ListNode* head) {
        vector<int>arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        int ans=0,n=arr.size();
        for(int i=0;i<n/2;i++){
            int sum=arr[i]+arr[n-1-i];
            ans=max(ans,sum);
        }
        return ans;
    }
};