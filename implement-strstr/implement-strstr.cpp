class Solution {
public:
    int strStr(string ha, string ne) {
        int m=ha.size(),n=ne.size();
        for (int i = 0; i < m - n + 1; i++)
          if (ha.substr(i, n) == ne)
            return i;
    return -1;
    }
};