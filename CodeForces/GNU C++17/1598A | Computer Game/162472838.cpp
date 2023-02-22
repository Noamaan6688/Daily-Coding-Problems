// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  int k;cin>>k;
  string s1,s2;cin>>s1>>s2;
  bool t=true;
  f1(i,k-1) if (s1[i]=='1' and s2[i]=='1') t=false; 
  if (t) cout<<"YES\n";
  else cout<<"NO\n";
 }
 
  return 0;
}
/*
4
3
000
000
4
0011
1100
4
0111
1110
6
010101
101010
 
*/