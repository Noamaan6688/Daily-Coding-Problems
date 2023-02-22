// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  ll r;cin>>r;while (r--)
  {
    ll x,y,z;cin>>x>>y>>z;
    // if (x==y && y==z) cout<<x+1<<" "<<y+1<<" "<<z+1<<"\n";
    // else if (x<y && y==z) cout<<y-x+1<<" "<<y+1<<" "<<z+1<<"\n";
    // else if (x>y && x==z) cout<<x+1<<" "<<x-y+1<<" "<<z+1<<"\n";
    // else if (z<y && y==x) cout<<x+1<<" "<<y+1<<" "<<y-z+1<<"\n";
    // else if (x>y && x>z) cout<<0<<" "<<x-y+1<<" "<<x-z+1<<"\n";
    // else if (x<y && y>z) cout<<y-x+1<<" "<<0<<" "<<y-z+1<<"\n";
    // else if (z>y && x<z) cout<<z-x+1<<" "<<z-y+1<<" "<<0<<"\n";
    cout<<max(0ll,1+max(y,z)-x)<<" "<<max(0ll,1+max(x,z)-y)<<" "<<max(0ll,1+max(x,y)-z)<<"\n";
  }
 
  return 0;
}