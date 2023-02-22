// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i=0;i<n;i++)
#define f1(i, n) for (int i=1;i<=n;i++)
#define fn(i, j, k) for (int i=j;i<=k;i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r,c=-1,s=0;cin>>r;while (r--)
 {
  int p,q;cin>>p>>q;
  s-=p;
  s+=q;
  c=max(c,s);
 }
 cout<<c<<"\n";
 
  return 0;
}
/*
4
0 3
2 5
4 2
4 0
 
*/
 
    