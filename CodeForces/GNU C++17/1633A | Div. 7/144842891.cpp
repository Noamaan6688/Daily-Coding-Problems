// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
bool x(int k)
{
  if (k==0) return false;
  return (ceil(log2(k))==floor(log2(k)));
}
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    int k;cin>>k;
    if (k%7==0) cout<<k<<"\n";
    else
    {
      if ((k%7)<(k%10)) cout<<k-(k%7)<<"\n";
      else cout<<k+(7-(k%7))<<"\n";
    }  
  }
 
  return 0;
}
/*
3
42
23
377
 
*/