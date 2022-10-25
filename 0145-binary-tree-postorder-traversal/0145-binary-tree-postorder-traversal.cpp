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
            return ;
        }
        st1.push(root);
        while(st1.empty()==false){
            TreeNode* temp=st1.top();
            st1.pop();
            // st2.push(temp);
            ans.push_back(temp->val);
            if(temp->left!=NULL){
                st1.push(temp->left);
            }
            if(temp->right!=NULL){
                st1.push(temp->right);
            }
        }
        reverse(ans.begin(),ans.end());
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        
          postorder(root,ans);
        return ans;
    }
};