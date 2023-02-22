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
    int k,s=0;cin>>k;
  f(i,k)
    {
   int c;cin>>c;
   if (c!=2) s+=1;
  }
  cout<<s<<"\n";
  }
 
  return 0;
}
/*
4
1
2
3
1 2 3
5
1 1 1 1 1
3
3 3 2
 
*/
 
    