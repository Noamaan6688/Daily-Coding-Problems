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
    ll p,q;cin>>p>>q;
    if ((p==1 || q==1) && (p+q>3)) cout<<"-1\n";
    else
    {
      ll c=p+q-2+abs(p-q);
      if ((p+q)%2!=0) c-=1;
      cout<<c<<"\n";
    }
  }
 
  return 0;
}
/*
6
1 1
2 1
1 3
4 2
4 6
10 5
 
*/