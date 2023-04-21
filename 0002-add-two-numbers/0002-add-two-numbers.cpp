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
        ListNode* c=new ListNode();
        ListNode* d=c;
        int e=0;
        while(l1!=NULL || l2!=NULL || e)
        {
            int s=0;
            if (l1!=NULL)
            {
                s+=l1->val;
                l1=l1->next;
            }
            if (l2!=NULL)
            {
                s+=l2->val;
                l2=l2->next;
            }
            s+=e;
            e=s/10;
            ListNode *node=new ListNode(s%10);
            d->next=node;
            d=d->next;
        }
        return c->next;
    }
};