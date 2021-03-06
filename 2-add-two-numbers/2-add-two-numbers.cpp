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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,sum=0;
         ListNode *ll=new ListNode();
        ListNode *pt=ll;
        while(l1!=NULL&&l2!=NULL)
        {
            ListNode *ll1=new ListNode();
            sum=carry+l1->val+l2->val;
                if(sum>9)
                {
                    sum=sum%10;
                    carry=1;
                }
                else
                {
                    carry=0;
                }
            ll1->val=sum;
            pt->next=ll1;
            pt=ll1;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            ListNode *ll1=new ListNode();
            if(carry)
            {
                ll1->val=(l1->val+carry)%10;
                carry=(l1->val+carry)/10;
            }
            else
            ll1->val=l1->val;
            pt->next=ll1;
            pt=ll1;
            l1=l1->next;
            
        }
          while(l2!=NULL)
        {
                ListNode *ll1=new ListNode();
               if(carry)
            {
                ll1->val=(l2->val+carry)%10;
                carry=(l2->val+carry)/10;
            }
            else
            ll1->val=l2->val;
            pt->next=ll1;
            pt=ll1;
            l2=l2->next;
            
        }
        if(carry)
        {
           ListNode *ll1=new ListNode(1);
            pt->next=ll1;
            pt=ll1;
        }
        ll=ll->next;
        return ll;
    }
};