class Solution {
public:
    int buildChar(int ch[26]) {
        int ans=0;
        for (int i=0;i<26;i+=1) 
        {
            if (ch[i]) 
            {
                ans+=1;
                ch[i]-=1;
                ans+=buildChar(ch);
                ch[i]+=1;
            }
        }
        return ans;
    }

    int numTilePossibilities(string tiles) {
        int ch[26]={0};
        for (char c:tiles) ch[c-'A']++;
        return buildChar(ch);
    }
};