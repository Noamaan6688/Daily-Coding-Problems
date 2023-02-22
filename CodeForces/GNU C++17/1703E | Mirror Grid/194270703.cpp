// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  int k,c=0;cin>>k;
 vector<vector<char>>v(k,vector<char>(k));
 f(i,k) f(j,k)cin>>v[i][j];
 f(i,((k+1)/2))
 {
  f(j,(k/2))
  {
   // if (i!=(k-i-1) && j!=(k-j-1))
      {
        int d = 0;
        d=(v[i][j]-'0')+(v[k-j-1][i]-'0')+(v[j][k-i-1]-'0')+(v[k-i-1][k-j-1]-'0');
     c+=min(d,4-d);
      }
  }
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
5
3
010
110
010
1
0
5
11100
11011
01011
10011
11000
5
01000
10101
01010
00010
01001
5
11001
00000
11111
10110
01111
 
*/