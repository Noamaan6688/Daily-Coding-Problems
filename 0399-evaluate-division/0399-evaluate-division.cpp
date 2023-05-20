class Solution {
public:
    unordered_map<string,vector<pair<string,double>>>vp;
    unordered_map<string,bool>visit;
    double d;
    
    bool df(string st,string en,double c)
    {
        if (st==en && vp.find(st)!=vp.end())
        {
            d=c;
            return 1;
        }
        bool t=0;
        visit[st]=1;
        for (int i=0;i<vp[st].size();i+=1)
        {
            if (visit[vp[st][i].first]==0)
            {
                t=df(vp[st][i].first,en,c*vp[st][i].second);
                if (t) break;
            }
        }
        visit[st]=0;
        return t;
    }
    
    
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& va, vector<vector<string>>& qu) {
        int n1=eq.size(),n2=qu.size();
        vector<double>v(n2);
        for (int i=0;i<n1;i+=1)
        {
            vp[eq[i][0]].push_back({eq[i][1],va[i]});
            vp[eq[i][1]].push_back({eq[i][0],1/va[i]});
            visit[eq[i][0]]=0;
            visit[eq[i][1]]=0;
        }
        for (int i=0;i<n2;i+=1)
        {
            d=1;
            bool c=df(qu[i][0],qu[i][1],1);
            if (c) v[i]=d;
            else v[i]=-1;
        }
        return v;
    }
};