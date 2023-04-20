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
        map<Node*,Node*>mp;
        int i=0;
        Node* c=head;
        while (c)
        {
            mp[c]=new Node(c->val);
            c=c->next;
        }
        c=head;
        while (c)
        {
            mp[c]->next=mp[c->next];
            mp[c]->random=mp[c->random];
            c=c->next;
        }
        return mp[head];
    }
};