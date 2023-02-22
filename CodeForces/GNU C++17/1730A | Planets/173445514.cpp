// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  int p,q,s=0;cin>>p>>q;
  int b[p];
  f(i,p) cin>>b[i];
  unordered_map<int,int>mp;
  f(i,p) mp[b[i]]++;
  for (auto i:mp)
  {
    if (i.second>1)
    {
      s+=min(i.second,q);
    }
    else if (i.second==1) s+=1;
  }
  cout<<s<<"\n";
 
  return ;
}
 
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
4
10 1
2 1 4 5 2 4 5 5 1 2
5 2
3 2 1 2 2
2 2
1 1
2 2
1 2
 
*/