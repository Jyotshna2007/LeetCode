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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;
        queue<TreeNode* >q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int n=q.size();
            vector<int>l;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                l.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(cnt%2==1) reverse(l.begin(),l.end());
            res.push_back(l);
            cnt++;
        }
        return res;
    }
};