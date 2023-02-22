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
  ll k;cin>>k;
  ll c1=k/3,c2=k/3;
  if (k%3>0) c2+=1;
  if (c2+(c1*2)!=k) swap(c1,c2);
  cout<<c2<<" "<<c1<<"\n";
 }
 
 return 0;
}
/*
6
1000
30
1
32
1000000000
5
 
*/