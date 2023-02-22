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
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  ll r;cin>>r;while (r--)
  {
    string s;cin>>s;
    ll a=0,b=0,c=0;
    f(i,s.size())
    {
      if (s[i]=='A') a+=1;
      else if (s[i]=='B') b+=1;
      else if (s[i]=='C') c+=1;
    }
    if (b==a+c) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}