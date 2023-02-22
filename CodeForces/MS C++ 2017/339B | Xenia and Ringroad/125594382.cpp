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
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  ll p,q,c=0,d=1;cin>>p>>q;
  ll *b=new ll[q];
  f(i,q) cin>>b[i];
  f(i,q)
  {
    if (b[i]>d)
    {
      c+=(b[i]-d);d=b[i];
    }  
    else if (b[i]<d)
    {
      c+=((p-d+1)+(b[i]-1));d=b[i];
    }
  }
  cout<<c<<"\n";
 
  return 0;
}