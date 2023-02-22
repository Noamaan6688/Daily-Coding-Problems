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
    if (p==0 && q==0) cout<<"0\n";
    else
    {
      int s=sqrt((p*p)+(q*q));
      if ((s*s)==((p*p)+(q*q))) cout<<"1\n";
      else cout<<"2\n";
    }
  }
 
  return 0;
}
/*
3
8 6
0 0
9 15
 
*/