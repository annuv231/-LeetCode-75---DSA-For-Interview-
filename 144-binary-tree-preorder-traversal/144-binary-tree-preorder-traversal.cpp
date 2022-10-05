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
    
    //recursive
// public:
//     void inorder(TreeNode* root,vector<int>&ans){
//         if(root==NULL){
//             return;
//         }
//         ans.push_back(root->val);
//         inorder(root->left,ans); 
//         inorder(root->right,ans);
//     }
    
    //iterative;
    
public:
    void inorder(TreeNode* root,vector<int>&ans){
        stack<TreeNode*>st;
        if(root==NULL){
            return;
        }
        st.push(root);
        while(!st.empty()){
            TreeNode* f=st.top();
            st.pop();
            ans.push_back(f->val);
            // cout<<f->val<<" ";
            if(f->right!=NULL){
                st.push(f->right);
            }
            if(f->left!=NULL){
               st.push(f->left);
            }
            
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }
};
