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
  ll k,c1=-1,c2=-1;cin>>k;
  int b[k];
  f(i,k)
  {
    cin>>b[i];
    if (c1==-1 && b[i]==0) c1=i;
    if (b[i]==1) c2=i;
  }
  // vector<int>v(k,0),v1(k,0),v2(k,0);
  ll c=0,mx1=0,mx2=0,mx3=0;
  for (int i=k-1;i>=0;i-=1)
  {
    if (b[i]==0) c+=1;
    else mx1+=c;
    // cout<<b[i]<<" "<<c<<" "<<mx<<"\n";
  }
  // for (auto i:v) mx=max(mx,i);
  c=0;
  for (int i=k-1;i>=0;i-=1)
  {
    if (i==c1) mx2+=c;
    else if (b[i]==0) c+=1;
    else mx2+=c;
    // cout<<b[i]<<" "<<c<<" "<<mx2<<"\n";
  }
  // for (auto i:v1) mx=max(mx,i);
  c=0;
  for (int i=k-1;i>=0;i-=1)
  {
    if (i==c2) c+=1; 
    else if (b[i]==0) c+=1;
    else mx3+=c;
  }
  // for (auto i:v2) mx=max(mx,i);
  ll mx=max(mx1,mx2);
  cout<<max(mx,mx3)<<"\n";
 
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
5
4
1 0 1 0
6
0 1 0 0 1 0
2
0 0
8
1 0 1 1 0 0 0 1
3
1 1 1
 
*/