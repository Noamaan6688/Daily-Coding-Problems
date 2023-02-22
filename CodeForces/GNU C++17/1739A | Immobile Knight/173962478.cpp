// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
 
void solve()
{
  int p,q;cin>>p>>q;
  if ((p>3 && q>=1) || (p>=1 && q>3)) cout<<"1 1\n";
  else
  {
    if (p==3 && q==3) cout<<"2 2\n";
    else if (p==1 && q==1) cout<<"1 1\n";
    else if ((p==2 && q==3) || (p==3 && q==2)) cout<<"2 2\n";
    else cout<<"1 1\n";
  }
 
  return ;
}
 
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
3
1 7
8 8
3 3
 
 
*/