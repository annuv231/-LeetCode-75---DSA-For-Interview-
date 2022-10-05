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
    void postorder(TreeNode* root,vector<int>&ans){
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        if(root==NULL){
            return;
        }
        st1.push(root);
        while(!st1.empty()){
            TreeNode* f=st1.top();
            st1.pop();
            st2.push(f);
            if(f->left!=NULL){
                st1.push(f->left);
            }
            if(f->right!=NULL){
                st1.push(f->right);
            }
        }
        while(!st2.empty()){
            TreeNode* f=st2.top();
            ans.push_back(f->val);
            st2.pop();
        }
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        
          postorder(root,ans);
        return ans;
    }
};