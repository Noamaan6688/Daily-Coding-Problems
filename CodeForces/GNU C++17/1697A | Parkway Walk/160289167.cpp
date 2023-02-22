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
    int p,q,s=0;cin>>p>>q;
    int b[p];
    f(i,p) cin>>b[i];
    f(i,p) s+=b[i];
    if (s>q) cout<<s-q<<"\n";
    else cout<<"0\n";
  }
 
  return 0;
}
/*
3
3 1
1 2 1
4 5
3 3 5 2
5 16
1 2 3 4 5
 
*/