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
    ll a,b,c,s1=0,s2=1;cin>>a>>b>>c;
    b*=2;
    if (b==(a+c)) cout<<"YES\n";
    else if (b>(a+c))
    {
      if (((b-a)%c==0) || ((b-c)%a==0)) cout<<"YES\n";
      else cout<<"NO\n";
    }
    else
    {
      if ((a+c)%b==0) cout<<"YES\n";
      else cout<<"NO\n";
    }
  }
 
  return 0;
}
/*
11
10 5 30
30 5 10
1 2 3
1 6 3
2 6 3
1 1 1
1 1 2
1 1 3
1 100000000 1
2 1 1
1 2 2
*/