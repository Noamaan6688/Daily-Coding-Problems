class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        queue<string> q; unordered_set<string> vis;
        string best = s; int n = s.size();
        q.push(s); vis.insert(s);

        while (!q.empty()) {
            string cur = q.front(); q.pop();
            best = min(best, cur);

            string add = cur;
            for (int i = 1; i < n; i += 2)
                add[i] = (add[i] - '0' + a) % 10 + '0';
            if (vis.insert(add).second) q.push(add);

            string rot = cur.substr(n - b) + cur.substr(0, n - b);
            if (vis.insert(rot).second) q.push(rot);
        }
        return best;
    }
};