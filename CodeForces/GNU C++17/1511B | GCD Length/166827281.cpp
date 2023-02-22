// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  ll a,b,c;cin>>a>>b>>c;
        ll p=pow(10,a-1)+pow(10,c-1);
        ll q=pow(10, b-1);
        cout<<p<<" "<<q<<"\n";
 }
 
  return 0;
}
/*
4
2 3 1
2 2 2
6 6 2
1 1 1
 
*/