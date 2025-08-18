using namespace std;

class Solution {
    static constexpr double TARGET = 24.0;
    static constexpr double EPS = 1e-4;

    bool dfs(vector<double>& a) {
        int n = (int)a.size();
        if (n == 1) return fabs(a[0] - TARGET) < EPS;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                double x = a[i], y = a[j];
                vector<double> rest;
                rest.reserve(n - 1);
                for (int k = 0; k < n; ++k) if (k != i && k != j) rest.push_back(a[k]);

                vector<double> cand = {x + y, x * y, x - y, y - x};
                for (double v : cand) {
                    rest.push_back(v);
                    if (dfs(rest)) return true;
                    rest.pop_back();
                }
                if (fabs(y) > EPS) { rest.push_back(x / y); if (dfs(rest)) return true; rest.pop_back(); }
                if (fabs(x) > EPS) { rest.push_back(y / x); if (dfs(rest)) return true; rest.pop_back(); }
            }
        }
        return false;
    }
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> a(cards.begin(), cards.end());
        for (double &v : a) v = (double)v;
        return dfs(a);
    }
};