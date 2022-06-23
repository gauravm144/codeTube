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
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *just=head->next;
        ListNode *tmp=NULL;
        while(head->next!=NULL)
        {
            head->next=tmp;
            tmp=head;
            head=just;
            just=just->next;
        }
        
       head->next=tmp;
        return head;
        return head;
    }
};