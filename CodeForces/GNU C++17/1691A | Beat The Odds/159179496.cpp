// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll k,c0=0,c1=0;cin>>k;
    ll b[k];
    f(i,k)
    {
      cin>>b[i];
      if (b[i]%2) c0+=1;
      else c1+=1;
    }
    cout<<min(c0,c1)<<"\n";
  }
 
  return 0;
}
/*
2
5
2 4 3 6 8
6
3 5 9 7 1 3
 
*/