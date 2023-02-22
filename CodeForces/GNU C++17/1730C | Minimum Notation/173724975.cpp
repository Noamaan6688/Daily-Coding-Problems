// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i=0;i<n;i++)
#define f1(i, n) for (int i=1;i<=n;i++)
#define fn(i, j, k) for (int i=j;i<=k;i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<fixed; cout<<setprecision(10);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 string s;cin>>s;
 char c='9';
 for (int i=s.size()-1;i>=0;i-=1)
 {
  if (s[i]<=c) c=s[i];
  else s[i]=min((char)(s[i]+1),'9');
 }
 sort(s.begin(),s.end());
 cout<<s<<"\n";
 
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
4
04829
9
01
314752277691991
 
*/
 
    