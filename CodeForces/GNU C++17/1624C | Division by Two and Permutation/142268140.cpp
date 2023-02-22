// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <map>
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
    ll k,m=0,c=0;cin>>k;
    ll b[k];
    f(i,k) cin>>b[i];
    set<ll>s;
    bool f=true;
    f(i,k)
    {
      while (b[i]>k) b[i]/=2;
      while (b[i]>0 && s.find(b[i])!=s.end()) b[i]/=2;
      if (b[i]<=0) f=false;
      else s.insert(b[i]);
    }
    sort(b,b+k);
    for (ll i=k-1;i>=0;i-=1)
    {
      if (b[i]<=k) break;
      while (b[i]<=k) b[i]/=2;
    }
    f(i,k)
    {
      if (b[i]<i+1)
      {
        c=1;break;
      }
      else
      {
        while (b[i]>i+1) b[i]/=2;
        if (b[i]!=i+1)
        {
          c=1;break;
        }
      }
    }
    if (c==1) cout<<"NO\n";
    else cout<<"YES\n";
  }
 
  return 0;
}
/*
6
4
1 8 25 2
2
1 1
9
9 8 3 4 2 7 1 5 6
3
8 2 1
4
24 7 16 7
5
22 6 22 4 22
*/