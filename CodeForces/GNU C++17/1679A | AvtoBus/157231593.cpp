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
    if (k%2!=0 || k<4) cout<<"-1\n";
    else
    {
      ll c=k/6;
      if (k%6!=0) c+=1;
      cout<<c<<" "<<k/4<<"\n";
    }
  }
 
  return 0;
}
/*
4
4
7
24
998244353998244352
 
*/