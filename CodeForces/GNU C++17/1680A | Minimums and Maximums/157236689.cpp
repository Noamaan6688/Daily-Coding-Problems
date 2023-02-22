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
    int a,b,c,d;cin>>a>>b>>c>>d;
    // if (a<c)
    // {
    //   if (c<=b) cout<<c<<"\n";
    //   else cout<<a+c<<"\n";
    // }
    // else
    // {
    //   if (a<=d) cout<<a<<"\n";
    //   else cout<<a+c<<"\n";
    // }
    if (max(a,c)<=min(b,d)) cout<<max(a,c)<<"\n";
    else cout<<a+c<<"\n";
  }
 
  return 0;
}
/*
7
3 5 4 6
5 8 5 5
3 3 10 12
1 5 3 3
1 1 2 2
2 2 1 1
6 6 6 6
 
*/