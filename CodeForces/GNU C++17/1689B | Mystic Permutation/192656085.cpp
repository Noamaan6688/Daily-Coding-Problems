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
 
 
void solve()
{
 int k;cin>>k;
 vector<int>v1(k),v2(k);
 f(i,k) cin>>v1[i];
 if (k==1)
 {
  cout<<"-1\n";return;
 }
 f(i,k) v2[i]=i+1;
 f(i,k-1) if (v1[i]==v2[i]) swap(v2[i],v2[i+1]);
 if (v1[k-1]==v2[k-1]) swap(v2[k-1],v2[k-2]);
 f(i,k) cout<<v2[i]<<" ";cout<<"\n";
 
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
4
3
1 2 3
5
2 3 4 5 1
4
2 3 1 4
1
1
 
*/
 
 