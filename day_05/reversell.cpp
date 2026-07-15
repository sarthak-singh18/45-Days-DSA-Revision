
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
        
    }
};