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
 ll k,c1=-1,c2=1e6;cin>>k;
  map<ll,ll>mp;
  f(i,k)
  {
    ll n;cin>>n;
    mp[n]++;
    if (n>c1) c1=n;
    if (n<c2) c2=n;
  }
  // cout<<c1<<" "<<c2<<" "<<mp[c1]<<" "<<mp[c2]<<"\n";
  if (c1!=c2) cout<<mp[c1]*mp[c2]*2<<"\n";
  else cout<<k*(k-1)<<"\n";
 
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
5
6 2 3 8 1
6
7 2 8 3 2 10
 
*/