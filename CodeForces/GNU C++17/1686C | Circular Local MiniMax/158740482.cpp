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
    bool t=true;
    sort(b,b+k);
    f1(i,(k/2)-1) if (b[i]>=b[i+(k/2)-1]) t=false;
    if (!t || k%2!=0) cout<<"NO\n";
    else 
    {
      cout<<"YES\n";
      f(i,k/2) cout<<b[i]<<" "<<b[i+k/2]<<" ";cout<<"\n";
    } 
  }
 
  return 0;
}
/*
4
3
1 1 2
4
1 9 8 4
4
2 0 2 2
6
1 1 1 11 111 1111
 
*/