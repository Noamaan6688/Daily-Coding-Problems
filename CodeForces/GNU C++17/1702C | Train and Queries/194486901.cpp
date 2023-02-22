// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 ll p,q;cin>>p>>q;
 map<ll,ll>mp1,mp2;
 // vector<vector<ll,ll>>v;
 f(i,p)
 {
  ll x;cin>>x;
  // v[x].push_back(i+1);
  if (mp1.find(x)==mp1.end()) mp1[x]=i+1;
  mp2[x]=i+1;
 }
 while (q--)
 {
  ll m,n,c=0,i=0,j=0;cin>>m>>n;
  if (mp1.find(m)!=mp1.end() && mp2.find(n)!=mp2.end() && mp1[m]<=mp2[n]) cout<<"YES\n";
  else cout<<"NO\n";
  // while (i<v[m].size() && j<v[n].size())
  // {
  //  if (v[m][i]<=v[n][j]) c=1;
  //  else if (v[m][i]>v[n][j]) j+=1;
  //  else i+=1;
  // }
  // if (c) cout<<"YES\n";
  // else cout<<"NO\n";
 }
 
 return;
}
 
int main()
{
 maan
 int r;cin>>r;while (r--)
 {
  solve();
 }
 
  return 0;
}
/*
3
 
 
6 3
3 7 1 5 1 4
3 5
1 7
3 10
 
 
3 3
1 2 1
2 1
1 2
4 5
 
 
7 5
2 1 1 1 2 4 4
1 3
1 4
2 1
4 1
1 2
 
*/