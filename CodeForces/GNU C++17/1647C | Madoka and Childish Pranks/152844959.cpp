// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    int p,q;cin>>p>>q;
    string s[111];
    f(i,p) cin>>s[i];
    if (s[0][0]=='1')
    {
      cout<<"-1\n";continue;
    }
    vector<int>v;
    for (int i=p-1;i>=0;i-=1)
    {
      for (int j=q-1;j>=0;j-=1)
      {
        if (s[i][j]=='1')
        {
          if (i!=0)
          {
            v.push_back(i-1);
            v.push_back(j);
            v.push_back(i);
            v.push_back(j);
          }
          else
          {
            v.push_back(i);
            v.push_back(j-1);
            v.push_back(i);
            v.push_back(j);
          }
        }
      }
    }
    cout<<v.size()/4<<"\n";
    for (int i=0;i<v.size();i+=4) cout<<v[i]+1<<" "<<v[i+1]+1<<" "<<v[i+2]+1<<" "<<v[i+3]+1<<"\n";
  }
 
  return 0;
}
/*
4
4 5
01000
10100
01010
00110
2 3
001
010
3 3
110
101
000
1 1
0
 
*/