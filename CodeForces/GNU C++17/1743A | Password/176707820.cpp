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
  int k;cin>>k;
  int b[k];
  f(i,k) cin>>b[i];
  cout<<(6*(10-k)*(10-k-1))/2<<"\n";
 
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
8
0 1 2 4 5 6 8 9
1
8
 
*/