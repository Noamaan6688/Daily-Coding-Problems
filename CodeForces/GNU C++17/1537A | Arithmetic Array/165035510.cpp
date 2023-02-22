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
    int k,s=0;cin>>k;
    int b[k];
    f(i,k) cin>>b[i],s+=b[i];
    if(s>=k) cout<<s-k<<"\n";
    else cout<<1<<"\n";
  }
 
  return 0;
}
/*
4
3
1 1 1
2
1 2
4
8 4 6 2
1
-2
 
*/