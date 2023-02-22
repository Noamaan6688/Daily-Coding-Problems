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
    ll p,q,c=0,d=1;cin>>p>>q;
    // if (p==1 || q==0) cout<<"0\n";
    while (d<q)
    {
      c+=1;
      d*=2;
      // cout<<p<<" "<<d<<" "<<c<<"\n";
    }
    c+=(p-d+q-1)/q;
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
4
8 3
6 6
7 1
1 1
 
*/