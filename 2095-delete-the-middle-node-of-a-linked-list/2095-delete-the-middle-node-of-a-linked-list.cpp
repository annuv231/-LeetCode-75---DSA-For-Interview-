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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return NULL;
        }
        
        // Brute force
        
//         int n=0;
//         ListNode* temp=head;
        
       //  while(temp!=NULL){
       //      n++;
       //      temp=temp->next;
       //  }
       //  int x=n/2-1;
       //  temp=head;
       //  while(x-- &&temp->next!=NULL){
       //      temp=temp->next;
       //  }
       //  if(temp->next==NULL){
       //      return NULL;
       //  }
       // else  temp->next=temp->next->next;
        
        
        // tortoise and hare method
        //no need to count size
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=head;
        while(fast!=NULL&&fast->next!=NULL){
            if(slow!=head){
                prev=prev->next;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }
};