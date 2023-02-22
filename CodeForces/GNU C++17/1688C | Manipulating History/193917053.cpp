// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
// float sqbs(int num, int p) {
//    int left = 0, right = num;
//    int mid;
//    float res;
//    while (left <= right) {
//       mid = (left + right) / 2;
//       if (mid * mid == num) {
//          res = mid;
//          break;
//       }
//       if (mid * mid < num) {
//          left = mid + 1;
//          res = mid;
//       } else {
//          right = mid - 1;
//       }
//    }
//    float incr = 0.1;
//    for (int i = 0; i < p; i++) {
//       while (res * res <= num) {
//          res += incr;
//       }
//       res -= incr;
//       incr /= 10;
//    }
//    return res;
// }
 
// void dfs(int i,int j,vector<int>*tr,int *b1,int *b2)
// {
//  int c=0;
//  b1[i]=1;
//  for (auto it:tr[i])
//  {
//   if (it==j) continue;
//   dfs(it,i,tr,b1,b2);
//   b1[i]+=b1[it];
//   c+=b2[it];
//  }
//  for (auto it:tr[i])
//  {
//   if (it==j) continue;
//   b2[i]=max(b2[i],c+b1[it]-b2[it]-1);
//  }
// }
 
// int df(int i,int j,int c,vector<vector<int>>&v,vector<vector<int>>&dp)
// {
//  if (i<0 || j<0) return 1e8;
//  if (i==0 && j==0)
//  {
//   if (dp[i][j]==0) return 1;
//   else return 1e8;
//  }
//  if (i>0) return dp[i-1][j]=dp[i][j]+v[i][j]+df(i-1,j,c,v,dp);
//  return dp[i][j-1]=dp[i][j]+v[i][j]+df(i,j-1,c,v,dp);
// }
 
 
void solve()
{
 ll k;cin>>k;
 char c=0;
 k=k*2+1;
 while (k--)
 {
  string s;cin>>s;
  f(j,s.size()) c^=s[j];
 }
 cout<<c<<"\n";
 
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
2
2
a
ab
b
cd
acd
3
z
a
a
aa
yakumo
ran
yakumoran
 
*/
 