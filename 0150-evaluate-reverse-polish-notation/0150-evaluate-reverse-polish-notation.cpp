class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for (auto it : tokens) 
        {
            if (it == "+" || it == "-" || it == "*" || it == "/")
            {
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                switch (it[0]) 
                {
                    case '+':s.push(b+a);break; 
                    case '-':s.push(b-a);break;
                    case '*':s.push(b*a);break;     
                    case '/':s.push(b/a);break; 
                }
            } 
            else s.push(stoi(it));
        }
        return s.top();
    }
};