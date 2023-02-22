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
 flash 
 int r;cin >> r;
 while (r--)
 {
  ll b[7];
  f(i,7) cin>>b[i];
  if ((b[0]+b[1]+b[2])==b[6]) cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<"\n";
  else cout<<b[0]<<" "<<b[1]<<" "<<b[3]<<"\n";
 }
 
 return 0;
}
/*
5
1 3 4 4 5 7 8
1 2 3 4 5 6 7
300000000 300000000 300000000 600000000 600000000 600000000 900000000
1 1 2 999999998 999999999 999999999 1000000000
1 2 2 3 3 4 5
 
*/