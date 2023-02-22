// Hi
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  int r=0;cin>>r;
  while (r--)
  {
    ll a,b,c;cin>>a>>b>>c;
    bool f=false;
    if (a==b+c || b==a+c || c==a+b) f=true;
    if ((a==b && c%2==0) || (c==b && a%2==0) || (a==c && b%2==0)) f=true;
    if (f) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}