// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  int k,c=1;cin>>k;
  vector<int>v(k);
  f(i,k) cin>>v[i];
  string s;cin>>s;
  unordered_map<int,char>mp;
  f(i,k)
  {
    if (mp[v[i]] && mp[v[i]]!=s[i])
    {
      c=0;break;
    }
    mp[v[i]]=s[i];
  }
  if (c) cout<<"YES\n";
  else cout<<"NO\n";
 
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
7
5
2 3 2 4 1
cacta
1
50
a
2
11 22
ab
4
1 2 2 1
aaab
5
1 2 3 2 1
aaaaa
6
1 10 2 9 3 8
azzfdb
7
1 2 3 4 1 1 2
abababb
 
*/