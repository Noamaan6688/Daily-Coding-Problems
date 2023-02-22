// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 998244353     // 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll k,c=1;cin>>k;
    if (k%2==1)cout<<0%MOD<<"\n";
    else
    {
      k/=2;
      while (k!=0)
      {
        c*=k%MOD;
        k-=1;
        c%=MOD;
      }
      c*=c%MOD;
      cout<<c%MOD<<"\n";
    }
  }
 
  return 0;
}
/*
7
1
2
3
4
5
6
1000
 
*/