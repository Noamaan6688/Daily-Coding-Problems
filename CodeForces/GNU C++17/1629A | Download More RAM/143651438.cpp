// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll p,q,s=0;cin>>p>>q;
    ll b1[p],b2[p];
    f(i,p) cin>>b1[i];
    f(i,p) cin>>b2[i];
    s=p+1;
    while (s--)
    {
      f(j,p)
      {
        if (b1[j]<=q)
        {
          q+=b2[j];
          b1[j]=1000000000;
        }  
      }
    }
    // f(i,p) cout<<b1[i]<<" ";cout<<"\n";
    // f(i,p) cout<<b2[i]<<" ";cout<<"\n";
    cout<<q<<"\n";
  }
 
  return 0;
}
/*
4
3 10
20 30 10
9 100 10
5 1
1 1 5 1 1
1 1 1 1 1
5 1
2 2 2 2 2
100 100 100 100 100
5 8
128 64 32 16 8
128 64 32 16 8
*/