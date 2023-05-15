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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*c1=head;
        int n=0;
        while (c1)
        {
            c1=c1->next;
            n+=1;
        }
        n-=(k-1);
        ListNode*c2=head;
        ListNode*c3=head;
        while (k>1) c2=c2->next,k-=1;
        while (n>1) c3=c3->next,n-=1;
        int c=c2->val;
        c2->val=c3->val;
        c3->val=c;
        return head;
    }
};