// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  ll a,b,c,d;cin>>a>>b>>c>>d;
        ll e=max(a,max(b,c))-((a+b+c)-(max(a,max(b,c))));
        if((a+b+c)<(d+3) || (e-1)>d) cout<<"NO\n";
        else cout<<"YES\n";
 }
 
 return 0;
}
/*
3
2 2 1 0
1 1 1 1
1 2 3 2
 
*/