// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll k;cin>>k;
    ll b[k];
    f(i,k) cin>>b[i];
    bool t=true;
    f1(i,k-1) if(b[i]<=b[i-1]) t=false  ;
    if(k%2==0 || !t) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
4
7
1 3 4 2 2 1 5
3
1 3 4
5
1 3 2 4 2
4
4 3 2 1
 
*/