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
  ll p,q,c=0;cin>>p>>q;
  ll y=q%4;
  if(y==1) c=-q;
  else if(y==2) c=1;
  else if(y==3) c=q+1;
  if(p%2) cout<<p-c<<"\n";
  else cout<<p+c<<"\n";
 }
 
 return 0;
}
/*
9
0 1
0 2
10 10
10 99
177 13
10000000000 987654321
-433494437 87178291199
1 0
-1 1
 
*/