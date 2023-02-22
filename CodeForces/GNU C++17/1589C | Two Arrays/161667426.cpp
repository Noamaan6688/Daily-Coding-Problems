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
  int k,c=1;cin>>k;
  int b1[k],b2[k];
  f(i,k) cin>>b1[i];
  f(i,k) cin>>b2[i];
  sort(b1,b1+k);
  sort(b2,b2+k);
  f(i,k)
  {
   if(b2[i]-b1[i]==1) b1[i]=b2[i];
   else continue;
  }
  f(i,k) if(b1[i]!=b2[i])c=0;
  if(c) cout<<"YES\n";
  else cout<<"NO\n";
 }
 
  return 0;
}
/*
3
3
-1 1 0
0 0 2
1
0
2
5
1 2 3 4 5
1 2 3 4 5
 
*/