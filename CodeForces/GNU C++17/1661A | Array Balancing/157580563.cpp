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
    ll k,s=0;cin>>k;
    ll b1[k],b2[k];
    f(i,k) cin>>b1[i];
    f(i,k) cin>>b2[i];
    f(i,k-1) s+=min(abs(b1[i]-b1[i+1])+abs(b2[i]-b2[i+1]),abs(b1[i]-b2[i+1])+abs(b2[i]-b1[i+1]));
    cout<<s<<"\n";
  }
 
  return 0;
}
/*
3
4
3 3 10 10
10 10 3 3
5
1 2 3 4 5
6 7 8 9 10
6
72 101 108 108 111 44
10 87 111 114 108 100
 
*/