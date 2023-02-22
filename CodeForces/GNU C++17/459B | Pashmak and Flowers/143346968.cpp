// Hi
#include <bits/stdc++.h>
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
  ll k;cin>>k;
  ll b[k],p=0,q=0;
  f(i,k) cin>>b[i];
  map<ll,ll>m;
  f(i,k) m[b[i]]++;
  sort(b,b+k);
  for (auto it:m)
  {
    auto i=it.first;
    auto j=it.second;
    if (b[0]==i) p=j;
    if (b[k-1]==i) q=j;
    if (b[0]==b[k-1] && b[0]==i)
    {
      p=(k*(k-1))/2;q=1;
    }  
  }
  cout<<b[k-1]-b[0]<<" "<<p*q<<"\n";
 
  return 0;
}
/*
2
10057
90
*/