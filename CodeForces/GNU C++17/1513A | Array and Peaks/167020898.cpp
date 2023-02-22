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
    int p,q;cin>>p>>q;
    if(p-q<q+1)cout<<"-1\n";
    else
    {
      int c=q;
      f1(j,p-q)
      {
        cout<<j<<" "; 
        if(c>0)cout<<p-c+1<<" ",c-=1;
      }
      cout<<"\n";
    }
  }
 
  return 0;
}
/*
5
1 0
5 2
6 6
2 1
6 1
 
*/
 
    