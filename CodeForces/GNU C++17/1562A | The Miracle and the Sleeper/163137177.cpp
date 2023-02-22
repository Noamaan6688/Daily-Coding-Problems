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
  ll p,q;cin>>p>>q;
  if(p<=(q/2)+1) cout<<q%((q/2)+1)<<"\n";
  else cout<<(q%p)<<"\n";
 }
 
 return 0;
}
/*
4
1 1
999999999 1000000000
8 26
1 999999999
 
*/