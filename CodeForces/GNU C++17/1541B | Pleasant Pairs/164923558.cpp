// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
 ll k,c=0;cin>>k;
 ll b[k];
 f1(i,k) cin>>b[i];
 f1(i,k)
 {
  for(ll j=b[i]-(i%b[i]);j<=k;j+=b[i]) if(i>j && (b[i]*b[j])==i+j) c+=1;
 }
 cout<<c<<"\n";
  }
 
  return 0;
}
/*
3
2
3 1
3
6 1 5
5
3 1 5 9 2
 
*/
 
 