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
    int k,c=1,c1=0,c2=0;cin>>k;
    int b[k];
    f(i,k) cin>>b[i];
    c1=b[0]%2;
    c2=b[1]%2;
    for (int i=0;i<k;i+=2) if (b[i]%2!=c1) c=0;
    for (int i=1;i<k;i+=2) if (b[i]%2!=c2) c=0;
    if (c) cout<<"YES\n";
    else cout<<"NO\n"; 
  }
 
  return 0;
}
/*
4
3
1 2 1
4
2 2 2 3
4
2 2 2 2
5
1000 1 1000 1 1000
 
*/