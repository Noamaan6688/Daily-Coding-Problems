class Solution {
public:
    string predictPartyVictory(string se) {
        int c1=0,c2=0,c=0;
        for (int i=0;i<se.size();i+=1)
        {
            if (se[i]=='R')
            {
                if (c<0) se.push_back('D');
                c+=1;
            }
            else
            {
                if (c>0) se.push_back('R');
                c-=1;
            }
        }
        if (c>0) return "Radiant";
        return "Dire";
        // else
        // {
        //     if (c==0) return "Radiant";
        //     return "Dire";
        // }
    }
};