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
  ll a,b,c,d,e,f=0,g=0;cin>>a>>b>>c>>d>>e;
  if (d==e)
  {
    cout<<"0\n";return;
  }
  if (abs(d-e)>=c)
  {
    cout<<"1\n";return;
  }
 
 
 
 
 
 
 
  if (abs(d-e)<c)
  {
    if (abs(d-a)>=c && abs(a-e)>=c) cout<<"2\n";
    else if (abs(d-b)>=c && abs(b-e)>=c) cout<<"2\n";
    else if (abs(d-a)>=c && abs(a-e)<c && abs(a-b)>=c && abs(b-e)>=c) cout<<"3\n";
    else if (abs(d-b)>=c && abs(b-e)<c && abs(b-a)>=c && abs(a-e)>=c) cout<<"3\n";
    else cout<<"-1\n";
  }
 
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
10
3 5 6
3 3
0 15 5
4 5
0 10 5
3 7
3 5 6
3 4
-10 10 11
-5 6
-3 3 4
1 0
-5 10 8
9 2
1 5 1
2 5
-1 4 3
0 2
-6 3 6
-1 -4
 
*/