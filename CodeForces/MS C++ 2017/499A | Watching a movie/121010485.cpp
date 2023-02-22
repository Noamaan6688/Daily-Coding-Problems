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
  ll p,q;cin>>p>>q;
  ll m,n,c=1,s=0;
  while (p--)
  {
    cin>>m>>n;
    while (c!=n+1)
    {  
      if (c+q<=m) c+=q;
      else
      {
        s+=n-c+1;
        c=n+1;
      }
    }
  }
  cout<<s<<"\n";
  
 return 0;   
}