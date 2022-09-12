/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* head1=NULL;
        while(head!=NULL){
            ListNode* nextNode=head->next;
            head->next=head1;
            head1=head;
            head=nextNode;
            
        }
        // head1;
        return head1;
    }
};