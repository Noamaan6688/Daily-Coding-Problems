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
  int a,b;cin>>a>>b;
  int d=abs(a-b);
  if(d&1) cout<<"-1\n";
  else if(a==0&&b==0) cout<<"0\n";
  else if(a==b) cout<<"1\n";
  else cout<<"2\n";
 }
 
 return 0;
}
/*
6
1 2
3 5
5 3
6 6
8 0
0 0
 
*/