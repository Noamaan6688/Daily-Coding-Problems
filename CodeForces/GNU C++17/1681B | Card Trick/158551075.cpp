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
    ll p,q,c=0,n=0;cin>>p;
    ll b1[p];
    f(i,p) cin>>b1[i];
    cin>>q;
    ll b2[q];
    f(i,q) cin>>b2[i];
    f(i,q) c+=b2[i];
    c%=p;
    cout<<b1[c]<<"\n";
  }
 
  return 0;
}
/*
3
2
1 2
3
1 1 1
4
3 1 4 2
2
3 1
5
2 1 5 4 3
5
3 2 1 2 1
 
*/