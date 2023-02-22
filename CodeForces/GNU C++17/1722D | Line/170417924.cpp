// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 
 ll k,c=0,j=0;cin>>k;
 string s;cin>>s;
 vector<ll>v1;
 f(i,k)
 {
  if (s[i]=='L') v1.push_back(i),c+=i;
  else v1.push_back(k-1-i),c+=k-i-1;
 }
 // f(i,k) cout<<v1[i]<<" ";cout<<"\n";
 // ll j=k;
 sort(v1.begin(),v1.end());
 while (j<k)
 {
  if (v1[j]<(k-v1[j]-1)) c+=abs(k-v1[j]-1-v1[j]);
  cout<<c<<" ";
  j++;
 }
 cout<<"\n";
 
 return;
}
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  solve();
 } 
 
  return 0;
}
/*
3
2
1 2
2 1
3
1 1 2
2 2 1
3
4 6 8
5 7 6
 
*/