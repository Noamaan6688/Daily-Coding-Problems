// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 ll k;cin>>k;
 string s1,s2;cin>>s1;
 for (auto c:s1) s2+=char('9'-c+'0');
 if (s1[0]=='9')
 {
  s2[k-1]+=1;
  for (int i=k-1;i>=0;i-=1)
  {
   s2[i]+=1;
   if (s2[i]>'9') s2[i]-=10,s2[i-1]+=1;
  }
 }
 cout<<s2<<"\n";
 
 return;
}
 
int main()
{
 maan
 int r;cin>>r;while (r--)
 {
  solve();
 } 
 
  return 0;
}
/*
3
2
99
4
1023
3
385
 
*/