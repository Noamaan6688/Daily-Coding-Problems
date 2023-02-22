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
    f(i,k) cin>>b[i];
    f(i,k) s+=b[i];
    if ((s-k)%2==0) cout<<"maomao90\n";
    else cout<<"errorgorn\n";
  }
 
  return 0;
}
/*
2
4
2 4 2 1
1
1
 
*/