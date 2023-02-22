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
    int k,c=0;
  f(i,4)
    {
   cin>>k;
   c+=k;
  }
  if(c==4) cout<<"2\n";
  else if(c==0) cout<<"0\n";
  else cout<<"1\n";
  }
 
  return 0;
}
/*
3
0 0
0 0
1 0
0 1
1 1
1 1
 
*/
 
    