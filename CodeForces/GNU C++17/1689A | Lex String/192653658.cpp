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
 int a,b,c;cin>>a>>b>>c;
 string s1,s2,s3="";cin>>s1>>s2;
 sort(s1.begin(),s1.end());
 sort(s2.begin(),s2.end());
 int i=0,j=0,c1=0,c2=0;
 while (i<a && j<b)
 {
  if ((s1[i]<s2[j] && c1<c) || c2==c) s3+=s1[i],i+=1,c1+=1,c2=0;
  else s3+=s2[j],j+=1,c2+=1,c1=0;
 }
 cout<<s3<<"\n";
 
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
6 4 2
aaaaaa
bbbb
5 9 3
caaca
bedededeb
7 7 1
noskill
wxhtzdy
 
*/
 
 