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
        vector<ListNode*>v;
        for (auto i=head;i!=NULL;i=i->next) v.push_back(i);
        int i=1,j=v.size()-1;
        for (int i1=0;i1<v.size();i1+=1)
        {
            if (i1%2) head->next=v[i],i+=1;
            else head->next=v[j],j-=1;
            head=head->next;
        }
        head->next=NULL;
    }
};