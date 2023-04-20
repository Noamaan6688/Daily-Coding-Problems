/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
        Node*c=head;
        while (c)
        {
            Node*c1=new Node(c->val);
            c1->next=c->next;
            c->next=c1;
            c=c1->next;
        }
        
        c=head;
        while (c)
        {
            if (c->random) c->next->random=c->random->next;
            else c->next->random=NULL;
            c=c->next->next;
        }
        Node*c2=head->next;
        c=head->next;
        while (head)
        {
            head->next=c->next;
            head=head->next;
            if (!head) break;
            c->next=head->next;
            c=c->next;
        }
        return c2;
    }
};