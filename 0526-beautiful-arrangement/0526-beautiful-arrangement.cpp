class Solution {
public:
    int countArrangement(int n) {
        vector<int>v(1,0);
        for(int i=1;i<=n;i++) 
        {
            vector<int>v1;
            for (int j=1;j<=n;j++) 
            {
                if (i%j == 0 || j%i == 0)
                {
                    int c=(1<<j);
                    for (auto &k:v) if (!(k&c)) v1.push_back(k|c);
                }
            }
            v1.swap(v);
        }
        return v.size();
    }
};