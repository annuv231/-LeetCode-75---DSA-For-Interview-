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
       
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
           vector<int>lvl;
           int size=q.size();
            for(int i=0;i<size;i++){
                 TreeNode* front=q.front();
                  q.pop();
                 if(front->left!=NULL) q.push(front->left);
                 if(front->right!=NULL)q.push(front->right);
               
                 lvl.push_back(front->val);
                
            }
            ans.push_back(lvl);
          
            
        }
        return ans;
        
        // TC -> O(N)
        //SC- . O(N);

    }
};