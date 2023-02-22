// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
// bool fa(int p,int q,int b1[],int b2[],int low,int mid,int high)
// {
//   int c=0;
//   for (int i=0;i<p;i++)
//   {
//     if ((b1[i]*mid)>b2[i]) c+=(b1[i]*mid)-b2[i];
//   }
//   return (c<=q);
// }
 
void solve()
{
  int k;cin>>k;
  string s,s1="Timru";cin>>s;
  sort(s.begin(),s.end());
  if (s==s1) cout<<"YES\n";
  else cout<<"NO\n";
 
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
10
5
Timur
5
miurT
5
Trumi
5
mriTu
5
timur
4
Timr
6
Timuur
10
codeforces
10
TimurTimur
5
TIMUR
 
*/