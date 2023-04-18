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
        if (!head || !head->next || !head->next->next) return;
        int n=0,i=0;
        stack<ListNode*>st;
        ListNode*c1=head,*c2=head;
        while (c1!=NULL)
        {
            st.push(c1);
            n+=1;
            c1=c1->next;
        }
        while (i<n/2)
        {
            ListNode*c3=st.top();
            st.pop();
            c3->next=c2->next;
            c2->next=c3;
            c2=c2->next->next;
            i+=1;
        }
        c2->next=NULL;
    }
};