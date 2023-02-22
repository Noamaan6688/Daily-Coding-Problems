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
 int r;cin>>r;while (r--)
 {
  ll a,b,c,d;cin>>a>>b>>c>>d;
  double s=log10(1.0*a/c)+b-d;
  if (s==0) cout<<"=\n";
  else if (s>0) cout<<">\n";
  else cout<<"<\n";
 }
 
 return 0;
}
/*
5
2 1
19 0
10 2
100 1
1999 0
2 3
1 0
1 0
99 0
1 2
 
*/