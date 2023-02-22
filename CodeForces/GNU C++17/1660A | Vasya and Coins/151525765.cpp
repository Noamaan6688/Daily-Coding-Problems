// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll unsigned long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll p,q;cin>>p>>q;
    if (p==0) cout<<"1\n";
    else if (q==0) cout<<p+1<<"\n";
    else if (p!=0 && q!=0) cout<<(q*2)+1+p<<"\n";
  }
 
  return 0;
}
/*
5
1 1
4 0
0 2
0 0
2314 2374
 
*/