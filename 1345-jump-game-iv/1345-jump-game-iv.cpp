class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        if (n==1) return 0;
        unordered_map<int,vector<int>>mp;
        vector<int>v(n,0);
        queue<int>q;
        q.push(0);
        v[0]=1;
        int c=0;
        for (int i=0;i<n;i+=1) mp[arr[i]].push_back(i);
        while (!q.empty())
        {
            int n1=q.size();
            for (int i=0;i<n1;i+=1)
            {
                int d=q.front();q.pop();
                if (d==n-1) return c;
                if (d+1<n && v[d+1]==0)
                {
                    q.push(d+1);
                    v[d+1]=1;
                }
                if (d>0 && v[d-1]==0)
                {
                    v[d-1]=1;
                    q.push(d-1);
                }
                for (int j:mp[arr[d]])
                {
                    if (j!=d && v[j]==0)
                    {
                        v[j]=1;
                        q.push(j);
                    }
                }
                mp[arr[d]].clear();
            }
            c+=1;
        }
        return -1;
    }
};