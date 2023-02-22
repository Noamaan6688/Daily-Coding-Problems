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
  string s;cin>>s;
  f(i,k) c=max(c,s[i]-'a');
  cout<<c+1<<"\n";
  
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
1
a
4
down
10
codeforces
3
bcf
5
zzzzz
 
*/