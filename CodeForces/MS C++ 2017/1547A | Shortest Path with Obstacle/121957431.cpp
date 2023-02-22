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
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int r;cin>>r;
  while (r--)
  {
    int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
    int s=abs(c-a)+abs(d-b);
    if (a==e && c==e)
    {
      if ((f>b && f<d) || (f<b && f>d)) s+=2;
    }
    else if (b==f && d==f)
    {
      if ((e>a && e<c) || (e<a && e>c)) s+=2;
    }
    cout<<s<<"\n";
  }
 
 return 0;   
}