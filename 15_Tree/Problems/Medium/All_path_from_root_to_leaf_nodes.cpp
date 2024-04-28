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
private:
void solve(TreeNode* root,vector<vector<int>>&res,vector<int> ans){
    if(!root) return;
    ans.push_back(root->val);
    if( !root->left && !root->right){
        res.push_back(ans);
        return;
    }
    solve(root->left,targetSum-root->val,res,ans);
    solve(root->right,targetSum-root->val,res,ans);
}
public:
    vector<vector<int>> pathSum(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> ans;
        solve(root,res,ans);
 
 return res;
    }
};