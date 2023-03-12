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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for (int i=0;i<lists.size();i+=1) if (lists[i]) pq.push({lists[i]->val,i});
        
        ListNode*head=new ListNode(0);
        ListNode*c=head;
        while (!pq.empty())
        {
            int c1=pq.top().second;pq.pop();
            c->next=lists[c1];
            c=c->next;
            lists[c1]=lists[c1]->next;
            c->next=NULL;
            if (lists[c1]) pq.push({lists[c1]->val,c1});
        }
        return head->next;
    }
};