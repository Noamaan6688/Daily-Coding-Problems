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
 ll k,c=1,c1=-1,c2=-1;cin>>k;
 char b[2][k];
 // int b1[2][k];
 f(i,2)
 {
  f(j,k)
  {
   cin>>b[i][j];
   // b1[i][j]=0;
   // if (b[i][j]=='B') c1=i,c2=j,b1[i][j]=1;
  }
 }
 // if (c1!=-1)
 // {
 
 //  while (true)
 //  {
 //   ll i=c1,j=c2;
 //   if (b[i][j]=='B')
 //   {
 //    if (i!=0 && b[i-1][j]=='B')
 //    {
 //     if ()
 //    }
 //    if (j!=0 && b[i][j-1]=='B') c1+=1;
 //    if (i!=1 && b[i+1][j]=='B') c1+=1;
 //    if (j!=(k-1) && b[i][j+1]=='B') c1+=1; 
 //   }
 //   b1[i][j]=1;
 //  }
 // }
 // f(i,2)
 // {
 //  f(j,k)
 //  {
 //   if (j!=(k-3) && b[i][j]=='W' && b[i][j+2]=='W') c=0;
 //   // {
 //   //  if (b[i][j+2]=='W')
 //   //  {
 //   //   if (i!=0 && b[i-1][j]=='B') c=0;
 //   //   if (i!=1 && b[i+1][j]=='B') c=0;
 //   //  }
 //   // }
 //   if (i!=1 && b[i][j]=='W' && b[i+1][j]=='W') c=0;
 //   if (i!=1 && b[i][j]=='W' && (b[i+1][j+1]=='W' || b[i+1][j-1]=='W'))
 //   {
 //    if ()
 //    c=0;
 //   }
 //  }
 // }
 ll i=0;
 f(j,k)
 {
  if (b[0][j]=='W' && c1==-1) c1=0,c2=j;
  if (b[1][j]=='W' && c1==-1) c1=1,c2=j;
  if (b[0][j]=='W' && b[1][j]=='W')
  {
   c=0;break;
  }
  if (b[0][j]=='W' && j!=c2)
  {
   if ((abs(j-c2)%2)==0 && c1==0)
   {
    c=0;break;
   }
   if ((abs(j-c2)%2)!=0 && c1==1)
   {
    c=0;break;
   }
   c1=0;c2=j;
  }
  if (b[1][j]=='W' && j!=c2)
  {
   if ((abs(j-c2)%2)==0 && c1==1)
   {
    c=0;break;
   }
   else if ((abs(j-c2)%2)!=0 && c1==0)
   {
    c=0;break;   
   }
   c1=1,c2=j;
  }
 }
 if (c) cout<<"YES\n";
 else cout<<"NO\n";
 
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
6
3
WBB
BBW
1
B
B
5
BWBWB
BBBBB
2
BW
WB
5
BBBBW
BWBBB
6
BWBBWB
BBBBBB
 
*/