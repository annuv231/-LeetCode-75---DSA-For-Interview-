/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // cout<<node->val;
        // cout<<endl;
        // cout<<node->next<<" "<<node->next->next;
        // cout<<endl;
        // cout<<node->next->val;
        // node->val=node->next->val;
        // node->next=node->next->next;
        *node=*node->next;
        
    }
};