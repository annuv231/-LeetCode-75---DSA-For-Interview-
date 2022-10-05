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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>qe;
        vector<vector<int>>ans;
        
        if(root==NULL){
            return ans;
        }
        qe.push(root);
        while(!qe.empty()){
            //creating temp array
            vector<int>temp;
            
            int n=qe.size();
            
            for(int i=0;i<n;i++){
                TreeNode* f=qe.front();
                temp.push_back(f->val);
                qe.pop();
                if(f->left!=NULL){
                    qe.push(f->left);
                }
                if(f->right!=NULL){
                    qe.push(f->right);
                }
            }
            ans.push_back(temp);
        }
            return ans;

    }
};