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
    int p,q,c=1;cin>>p>>q;
    p*=2;
    int b[p];
    f(i,p) cin>>b[i]; 
    sort(b,b+p);
    f(i,p/2)
    {
      if (b[i+(p/2)]-b[i]<q)
      {
        c=0;break;
      }  
    }
    if (c) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
3
3 6
1 3 9 10 12 16
3 1
2 5 2 2 2 5
1 2
8 6
 
*/