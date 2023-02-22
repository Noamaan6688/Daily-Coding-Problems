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
    int k,c=0,j=0;cin>>k;
    int b[3];
    f(i,3) cin>>b[i];
    c+=k;j=k;
    f(i,3)
    {
      c+=b[j-1];
      j=b[j-1];
      if (j==0) break;
    }
    if (c<6) cout<<"NO\n";
    else cout<<"YES\n";
  }
 
  return 0;
}
/*
4
3
0 1 2
1
0 3 2
2
3 1 0
2
1 3 0
 
*/