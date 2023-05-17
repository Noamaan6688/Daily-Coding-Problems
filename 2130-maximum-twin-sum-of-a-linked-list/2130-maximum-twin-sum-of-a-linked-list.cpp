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
    ListNode* df(ListNode* head) {
        ListNode *prev=NULL, *curr=head, *forward;
        while(curr)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode*c1=head,*c2= head;
        while(c2 && c2->next)
        {
            c1=c1->next;
            c2=c2->next->next;
        }
        ListNode*c3=df(c1);
        int c=0;
        while(c3)
        {
            c=max(c,head->val+c3->val);
            c3=c3->next;
            head=head->next;
        }
        return c;
    }
};