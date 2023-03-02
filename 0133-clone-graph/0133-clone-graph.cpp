/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        unordered_map<Node*,Node*>cloned;
        queue<Node*>q;
        q.push(node);
        Node* node1=new Node(node->val,{});
        cloned[node]=node1;
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            for(auto adj:curr->neighbors){
                if(cloned.find(adj)==cloned.end()){
                    cloned[adj]=new Node(adj->val,{});
                    q.push(adj);
                }
                cloned[curr]->neighbors.push_back(cloned[adj]);
            }
        }
        return node1;
    }
};