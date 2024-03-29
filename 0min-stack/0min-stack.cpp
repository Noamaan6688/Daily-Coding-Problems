class MinStack {
public:
vector<int> v;
priority_queue<int, vector<int>, greater<int> > mn;
MinStack() {
    
}

void push(int val) {
    mn.push(val);
    v.push_back(val);
}

void pop() {
    if(mn.top()==v[v.size()-1])
    {
        mn.pop();
    }
    
    while(!mn.empty() and find (v.begin(), v.end(), mn.top())==v.end())
    {
         mn.pop();
    }
    v.pop_back();
}

int top() {
     return v[v.size()-1];
}

int getMin() {
    return mn.top();
}
};