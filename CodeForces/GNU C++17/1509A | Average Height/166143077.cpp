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
    int k;cin>>k;
    int b[k];
    f(i,k) cin>>b[i];
    f(i,k) if (b[i]%2) cout<<b[i]<<" ";
    f(i,k) if (!(b[i]%2)) cout<<b[i]<<" ";cout<<"\n";
  }
 
  return 0;
}
/*
4
3
1 1 2
3
1 1 1
8
10 9 13 15 3 16 9 13
2
18 9
 
*/