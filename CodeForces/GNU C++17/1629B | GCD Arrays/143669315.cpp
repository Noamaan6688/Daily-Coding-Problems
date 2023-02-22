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
    ll a,b,c,s=0;cin>>a>>b>>c;
    if (a==b)
    {
      if (a!=1) cout<<"YES\n";
      else cout<<"NO\n";
      continue;
    }
    if (a%2==0 && b%2==0) s+=(b-a)/2;
    else s+=((b-a)/2)+1;
    // cout<<c<<" "<<s;
    if (c>=s) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
9
1 1 0
3 5 1
13 13 0
4 4 0
3 7 4
4 10 3
2 4 0
1 7 3
1 5 3
 
*/