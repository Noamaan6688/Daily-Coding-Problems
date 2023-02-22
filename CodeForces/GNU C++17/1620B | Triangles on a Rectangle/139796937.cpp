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
    ll p,q;cin>>p>>q;
    vector<ll>v1;
    vector<ll>v2;
    vector<ll>v3;
    vector<ll>v4;
    ll m1=0,m2=0;
    ll n1;cin>>n1;
    f(i,n1)
    {
      ll k;cin>>k;
      v1.push_back(k);
    }
    ll n2;cin>>n2;
    f(i,n2)
    {
      ll k;cin>>k;
      v2.push_back(k);
    }
    ll n3;cin>>n3;
    f(i,n3)
    {
      ll k;cin>>k;
      v3.push_back(k);
    }
    ll n4;cin>>n4;
    f(i,n4)
    {
      ll k;cin>>k;
      v4.push_back(k);
    }
    // cout<<((v1[n1-1]-v1[0])*q)<<" "<<((v2[n2-1]-v2[0])*q)<<"\n";
    // cout<<((v3[n3-1]-v3[0])*p)<<" "<<((v4[n4-1]-v4[0])*p)<<"\n";
    m1=max(((v1[n1-1]-v1[0])*q),((v2[n2-1]-v2[0])*q));
    m2=max(((v3[n3-1]-v3[0])*p),((v4[n4-1]-v4[0])*p));
    cout<<max(m1,m2)<<"\n";
  }
 
  return 0;
}
/*
3
5 8
2 1 2
3 2 3 4
3 1 4 6
2 4 5
10 7
2 3 9
2 1 7
3 1 3 4
3 4 5 6
11 5
3 1 6 8
3 3 6 8
3 1 3 4
2 2 4
*/