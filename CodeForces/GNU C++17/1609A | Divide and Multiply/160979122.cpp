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
  ll k,c=1;cin>>k;
  vector<ll>b(k);
     f(i,k)cin>>b[i];
  f(i,k)
     {
   while(b[i]%2==0)
   {
    b[i]/=2;
    c*=2;
   }
  }
  sort(rbegin(b),rend(b));
  b[0]*=c;
  c=0;
  f(i,k) c+=b[i];
  cout<<c<<"\n";
 }
 
 return 0;
}
/*
5
3
6 4 2
5
1 2 3 4 5
1
10
3
2 3 4
15
8 8 8 8 8 8 8 8 8 8 8 8 8 8 8
 
*/