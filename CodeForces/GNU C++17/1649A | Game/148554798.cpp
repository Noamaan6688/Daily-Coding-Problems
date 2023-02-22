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
  ll r;cin>>r;while (r--)
  {
    int k,c=0,j=0;cin>>k;
    int b[k];
    f(i,k)cin>>b[i];
    for (int i=0;i<k;i+=1)
    {
      if (b[i]!=1)
      {
        j=i-1;break;
      }
    }
    for (int i=k-1;i>=0;i-=1)
    {
      if (b[i]!=1)
      {
        c=i-j+1;break;
      }
    }
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
3
2
1 1
5
1 0 1 0 1
4
1 0 1 1
 
4
7
1 1 0 1 0 1 1
4
1 1 1 1
4
1 1 0 1
6
1 1 1 0 0 1
*/