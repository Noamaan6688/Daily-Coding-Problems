// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int r;cin>>r;while (r--)
  {
    ll x,y,z,c=0;cin>>x>>y>>z;
    if ((x>(abs(x-y)*2)) || (y>(abs(x-y)*2)) || (z>(abs(x-y)*2))) c=-1;
    else
    {
      c=z+abs(x-y);
      if (c>(abs(x-y)*2)) c=z-abs(x-y);
    }
    cout<<c<<"\n";
  }
 
  return 0;
}