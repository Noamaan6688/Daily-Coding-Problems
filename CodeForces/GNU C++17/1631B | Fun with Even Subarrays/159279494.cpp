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
    ll k,c=0;cin>>k;
    ll b[k];
  f(i,k) cin>>b[i];
  for(ll i=k-2;i>=0;i-=1)
    {
   if(b[i]!=b[k-1])
      {
    c+=1;
    i-=(k-2-i);
   }
  }
  cout<<c<<"\n";
  }
 
  return 0;
}
/*
5
3
1 1 1
2
2 1
5
4 4 4 2 4
4
4 2 1 3
1
1
 
*/