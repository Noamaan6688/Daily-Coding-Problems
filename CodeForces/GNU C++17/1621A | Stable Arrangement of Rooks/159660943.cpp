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
 if ((p%2==0 && q>p/2) || (p%2!=0 && q>((p/2)+1))) cout<<"-1\n";
 else
 {
  int c=1;
  f(i,p)
  {
   f(j,p)
   {
    if (c==1 && i==j && q>0) cout<<"R",q-=1;
    else cout<<".";
   }
   cout<<"\n";
   if (c==1) c=0;
   else c=1;
  }
 }
  }
 
  return 0;
}
/*
5
3 2
3 3
1 1
5 2
40 33
 
*/