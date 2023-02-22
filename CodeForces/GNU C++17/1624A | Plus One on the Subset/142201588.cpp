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
    int k;cin>>k;
    ll b[k],m1=0,m2=1000000000;
    f(i,k)
    {
      cin>>b[i];
      m2=min(b[i],m2);
      m1=max(b[i],m1);
    }
    // cout<<m1<<" "<<m2<<"\n";
    cout<<m1-m2<<"\n";
  }
 
  return 0;
}
/*
3
6
3 4 2 4 1 2
3
1000 1002 998
2
12 11
*/