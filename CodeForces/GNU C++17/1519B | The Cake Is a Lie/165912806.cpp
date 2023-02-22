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
    int p,q,k;
    cin>>p>>q>>k;
    if (k==(p-1)+p*(q-1)) cout<<"YES\n";
    else cout<<"NO\n";  
  }
 
  return 0;
}
/*
6
1 1 0
2 2 2
2 2 3
2 2 4
1 4 3
100 100 10000
 
*/