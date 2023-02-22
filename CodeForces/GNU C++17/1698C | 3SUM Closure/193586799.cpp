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
 ll k;cin>>k;
 ll b[k];
 f(i,k) cin>>b[i];
 map<ll,int>mp;
 f(i,k) mp[b[i]]++;
 sort(b,b+k);
 if (!mp[b[0]+b[1]+b[2]] || !mp[b[k-1]+b[k-2]+b[k-3]] || !mp[b[0]+b[1]+b[k-1]] || !mp[b[0]+b[k-2]+b[k-1]]) cout<<"NO\n";
 else cout<<"YES\n";
 
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
4
3
-1 0 1
5
1 -2 -2 1 -3
6
0 0 0 0 0 0
4
-1 2 -3 4
 
*/