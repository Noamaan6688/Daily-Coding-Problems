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
  ll k,c=0;cin>>k;
  ll b[k];
        f(i,k) cin>>b[i];
        sort(b,b+k);
        f1(i,k-1) c=__gcd(c,b[i]-b[i-1]);
        if(c==0) cout<<"-1\n";
        else cout<<c<<"\n";
 }
 
 return 0;
}
/*
3
6
1 5 3 1 1 5
8
-1 0 1 -1 0 1 -1 0
4
100 -1000 -1000 -1000
 
*/