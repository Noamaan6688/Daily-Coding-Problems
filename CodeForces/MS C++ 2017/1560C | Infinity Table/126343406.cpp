// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <bitset>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  ll r;cin>>r;while (r--)
  {
    ll p=1;cin>>p;
    ll k=ceil(double(sqrt(p)));
    ll n=sqrt(p);
    n*=n;
    if (p-n==0) cout<<k<<" "<<1<<"\n";
    else if (p-n<=k) cout<<p-n<<" "<<k<<"\n";
    else
    {
      ll q=k*k;
      cout<<k<<" "<<q-p+1<<"\n";
    }
  }
 
  return 0;
}