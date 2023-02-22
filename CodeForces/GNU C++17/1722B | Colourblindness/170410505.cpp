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
  string s1,s2;cin>>s1>>s2;
  f(i,k) if (s1[i]=='G') s1[i]='B';
  f(i,k) if (s2[i]=='G') s2[i]='B';
  if (s1==s2) cout<<"YES\n";
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
6
2
RG
RB
4
GRBG
GBGB
5
GGGGG
BBBBB
7
BBBBBBB
RRRRRRR
8
RGBRRGBR
RGGRRBGR
1
G
G
 
*/