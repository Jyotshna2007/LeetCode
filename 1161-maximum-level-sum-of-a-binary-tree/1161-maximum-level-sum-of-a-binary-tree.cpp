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
    int maxLevelSum(TreeNode* root) {
        vector<int>j;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int s=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                s+=node->val;
                 if(node->left) q.push(node->left);
                 if(node->right) q.push(node->right);
            }
            j.push_back(s);
        }
            int maxi=*max_element(j.begin(),j.end());
            int ans=0;
            for(int i=0;i<j.size();i++){
                if(j[i]==maxi){
                    ans=i;
                    break;
                }
            }
        return ans+1;
    }
};