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
TreeNode* s(vector<int>&nums,int left,int right){
    if(left>right) return NULL;
    int mid=(left+right)/2;
    TreeNode* root=new TreeNode(nums[mid]);
    root->left=s(nums,left,mid-1);
    root->right=s(nums,mid+1,right);
    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return s(nums,0,nums.size()-1);
    }

};