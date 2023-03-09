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
    ListNode *detectCycle(ListNode *head) {
        // if (head==NULL && head->next==NULL) return head;
        ListNode*c1=head,*c2=head;
        while (c2 && c2->next)
        {
            c2=c2->next->next;
            c1=c1->next;
            if (c1==c2) break;
        }
        if (!(c2 && c2->next)) return NULL;
        while (head!=c1)
        {
            head=head->next;
            c1=c1->next;
        }
        return head;
    }
};