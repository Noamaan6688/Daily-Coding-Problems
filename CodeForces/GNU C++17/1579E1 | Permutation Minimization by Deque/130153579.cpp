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
  ll r;cin>>r;while (r--)
  {
    ll k;cin>>k;
    ll b[k];
    f(i,k) cin>>b[i];
    deque<ll>q;
    f(i,k)
    {
      if (q[0]>b[i]) q.push_front(b[i]);
      else q.push_back(b[i]);
    }
    f(i,q.size()) cout<<q[i]<<" ";cout<<"\n";
  }
 
  return 0;
}