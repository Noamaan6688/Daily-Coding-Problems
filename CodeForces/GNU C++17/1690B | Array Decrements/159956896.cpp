// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash int r;
 cin >> r;
 while (r--)
 {
  ll k,c=0,d=1;cin>>k;
  ll b1[k],b2[k];
  f(i,k) cin>>b1[i];
  f(i,k) cin>>b2[i];
  f(i,k) c=max(c,b1[i]-b2[i]);
  f(i,k)
  {
   if (b1[i]-b2[i]!=c && b2[i]!=0)
   {
    d=0;
    break;
   }
  }
  if (d) cout<<"YES\n";
  else cout<<"NO\n";
 }
 
 return 0;
}
/*
6
4
3 5 4 1
1 3 2 0
3
1 2 1
0 1 0
4
5 3 7 2
1 1 1 1
5
1 2 3 4 5
1 2 3 4 6
1
8
0
1
4
6
 
*/