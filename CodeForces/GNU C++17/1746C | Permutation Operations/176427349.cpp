// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
float sqbs(int num, int p) {
   int left = 0, right = num;
   int mid;
   float res;
   while (left <= right) {
      mid = (left + right) / 2;
      if (mid * mid == num) {
         res = mid;
         break;
      }
      if (mid * mid < num) {
         left = mid + 1;
         res = mid;
      } else {
         right = mid - 1;
      }
   }
   float incr = 0.1;
   for (int i = 0; i < p; i++) {
      while (res * res <= num) {
         res += incr;
      }
      res -= incr;
      incr /= 10;
   }
   return res;
}
 
 
void solve()
{
 ll k,c=1;cin>>k;
 ll b[k];
 f(i,k) cin>>b[i];
 ll v[k];
 f(i,k) v[k-b[i]]=i+1;
 for (auto i:v) cout<<i<<" ";cout<<"\n";
 
 return ;
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
5
4
1 2 3 4
5
1 3 2 4 5
3
2 3 1
1
1
8
7 6 5 4 3 2 8 1
 
*/