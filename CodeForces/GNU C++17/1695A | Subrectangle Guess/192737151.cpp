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
 
void solve()
{
 ll p,q,c=-1e9-7,c1=0,a;cin>>p>>q;
 // ll b[p][q];
 f1(i,p)
 {
  f1(j,q)
  {
   cin>>a;
   if (c<a)
   {
    c=a;
    c1=max(i,p-i+1)*max(j,q-j+1);
   }
   // cout<<c<<" "<<c1<<" "<<c2<<"\n";
  }
 }
 cout<<c1<<"\n";
 
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
1 1
3
4 4
2 12 6 10
3 15 16 4
1 13 8 11
14 7 9 5
2 3
-7 5 2
0 8 -3
 
*/
 