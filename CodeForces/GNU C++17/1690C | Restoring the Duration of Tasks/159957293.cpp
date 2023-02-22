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
  ll k,c=0;cin>>k;
  ll b1[k],b2[k];
  f(i,k) cin>>b1[i];
  f(i,k) cin>>b2[i];
  f(i,k)
  {
   cout<<b2[i]-max(c,b1[i])<<" ";
   c=b2[i];
  }
  cout<<"\n";
 }
 
 return 0;
}
/*
4
3
0 3 7
2 10 11
2
10 15
11 16
9
12 16 90 195 1456 1569 3001 5237 19275
13 199 200 260 9100 10000 10914 91066 5735533
1
0
1000000000
 
*/