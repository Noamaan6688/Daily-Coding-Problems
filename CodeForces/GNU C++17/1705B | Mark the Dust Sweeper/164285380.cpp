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
  ll k,c=0,c0=0,s=0;cin>>k;
  ll b[k];
  f(i,k) cin>>b[i];
  f(i,k-1)
  {
   if (b[i]>0) c=1;
   if (c==1 && b[i]==0) c0+=1;
   s+=b[i];
   // cout<<
  }
  cout<<s+c0<<"\n";
 }
 
 return 0;
}
/*
4
3
2 0 0
5
0 2 0 2 0
6
2 0 3 0 4 6
4
0 0 0 10
 
*/