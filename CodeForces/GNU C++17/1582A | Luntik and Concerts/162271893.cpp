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
  ll a,b,c;cin>>a>>b>>c;
  cout<<(a+b*2+c*3)%2<<"\n";
 }
 
 return 0;
}
/*
4
1 1 1
2 1 3
5 5 5
1 1 2
 
*/