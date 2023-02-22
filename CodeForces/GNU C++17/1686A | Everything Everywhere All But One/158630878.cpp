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
    int k,c=0,s=0;cin>>k;
    int b[k];
    f(i,k)
    {
      cin>>b[i];s+=b[i];
    }
    bool t=false;
    f(i,k) if (b[i]==floor(s-b[i])/(k-1)) t=true;
    if (t) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
4
3
42 42 42
5
1 2 3 4 5
4
4 3 2 1
3
24 2 22
 
*/