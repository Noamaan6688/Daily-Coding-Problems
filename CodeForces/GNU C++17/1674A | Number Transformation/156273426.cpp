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
    ll a,b;cin>>a>>b;
    if (b%a==0) cout<<"1 "<<b/a<<"\n";
    else cout<<"0 0\n";    
  }
 
  return 0;
}
/*
3
3 75
100 100
42 13
 
*/