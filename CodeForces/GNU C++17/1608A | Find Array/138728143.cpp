// Hi
#include <bits/stdc++.h>
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
  int r=0;cin>>r;
  while (r--)
  {
    int k;cin>>k;
    vector<ll>v;
    for (ll i=3;i<=2*k+1;i+=2) v.push_back(i);
    f(i,v.size()) cout<<v[i]<<" ";cout<<"\n";
  }
  return 0;
}