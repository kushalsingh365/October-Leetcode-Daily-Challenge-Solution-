class Solution {
public:
    ListNode* middlePrev(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return prev;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
          return NULL;
        }
        ListNode* curr=middlePrev(head);
        curr->next=curr->next->next;
        return head;
    }
};
