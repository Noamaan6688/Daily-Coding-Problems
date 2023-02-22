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
    int p,q;cin>>p>>q;
    if(q>=2&&p%2) cout<<"NO\n";
  else
    {
   cout<<"YES\n";
   f(i,p)
   {
    f(j,q) cout<<j*p+i+1<<" ";
    cout<<"\n";
   }
  }
  }
 
  return 0;
}
/*
4
1 1
2 2
3 3
3 1
 
*/