// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <deque>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll k=0,c=0,d=0,e=0,m=0;cin>>k;
    ll b[k];
    f(i,k) cin>>b[i];
    m=*max_element(b,b+k);
    d=b[k-1];e=k-1;
    while (b[e]!=m)
    {
      ll f=e-1;
      while (b[f]<=b[e]) f-=1;
      e=f;
      c+=1;
    }
    cout<<c<<"\n";
  }
 
  return 0;
}