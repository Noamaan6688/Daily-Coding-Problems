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
 int r;cin>>r;while (r--)
 {
    int k,c=0;cin>>k;
  f(i,k)
  {
   int p,q=0;cin>>p;
   q=(int)sqrt(p);
   if(p!=q*q) c=1; 
  }
  if (c) cout<<"YES\n";
  else cout<<"NO\n";
  }
 
  return 0;
}
/*
2
3
1 5 4
2
100 10000
 
*/