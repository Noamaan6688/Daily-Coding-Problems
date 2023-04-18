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
    void df(ListNode*c1,ListNode*c2)
    {
        if (c1->next==NULL || c1->next->next==NULL) return;
        ListNode*c3=c1;
        ListNode*c4;
        while (c3->next)
        {
            c4=c3;
            c3=c3->next;
        }
        c2=c1->next;
        c1->next=c3;
        c3->next=c2;
        c1=c3;
        c4->next=NULL;
        df(c1->next,c2);
    }
    
    
    void reorderList(ListNode* head) {
        ListNode*c1=head;
        ListNode*c2=NULL;
        df(c1,c2);
    }
};