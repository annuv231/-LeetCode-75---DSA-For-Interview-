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
    TreeNode* inOrder(TreeNode* root,int val,int depth){
            if(root==NULL){
                return root;
            }
            if(depth==2){
              TreeNode* left=new TreeNode(val);
              TreeNode* right=new TreeNode(val);
              left->left=root->left;
              right->right=root->right;
              root->left=left;
              root->right=right;

            }
           else{
               inOrder(root->left,val,depth-1);
               inOrder(root->right,val,depth-1);
           }
        return root;
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        
        return inOrder(root,val,depth);
    }
};