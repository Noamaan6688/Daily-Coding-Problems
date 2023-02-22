// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  ll k,c=0;cin>>k;
  ll b[k];
  f(i,k) cin>>b[i];
  c=b[0];
  f1(i,k-1) c&=b[i];
  cout<<c<<"\n";
 }
 
 return 0;
}
/*
4
2
1 2
3
1 1 3
4
3 11 3 7
5
11 7 15 3 7
 
*/