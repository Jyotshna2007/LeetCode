/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root) return -1;
        vector<long long>sum;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            long long ls=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                ls+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            sum.push_back(ls);
        }
        if(k>sum.size()) return -1;
        sort(sum.rbegin(),sum.rend());
        return sum[k-1];
    }
};