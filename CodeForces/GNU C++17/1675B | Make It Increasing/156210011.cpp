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
    ll k,c=0;;cin>>k;
    ll b[k];
    f(i,k) cin>>b[i];
    for (ll i=k-2;i>=0;i-=1)
    {
      if (b[i+1]==0)
      {
        c=-1;
        break;
      }
      while (b[i]>=b[i+1])
      {
        b[i]/=2;c+=1;
        // cout<<b[i]<<" "<<b[i+1]<<" "<<c<<"\n";
        if (b[i]==0) break;
      }
    }
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
7
3
3 6 5
4
5 3 2 1
5
1 2 3 4 5
1
1000000000
4
2 8 7 5
5
8 26 5 21 10
2
5 14
 
*/