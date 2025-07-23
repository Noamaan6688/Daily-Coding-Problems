class Solution 
{
public:
    int maximumGain(string s, int x, int y) {
        if (x < y)
        {
            return remove(s, 'b', 'a', y, x);
        }
        else
        {
            return remove(s, 'a', 'b', x, y);
        }
    }

private:
    int remove(string& s, char first, char second, int firstPoints, int secondPoints) 
    {
        int score = 0;
        vector<char> stack;

        for (char c : s) 
        {
            if (!stack.empty() && stack.back() == first && c == second) 
            {
                stack.pop_back();
                score += firstPoints;
            } 
            else 
            {
                stack.push_back(c);
            }
        }

        vector<char> stack2;
        for (char c : stack) 
        {
            if (!stack2.empty() && stack2.back() == second && c == first) 
            {
                stack2.pop_back();
                score += secondPoints;
            } 
            else 
            {
                stack2.push_back(c);
            }
        }
        return score;
    }
};