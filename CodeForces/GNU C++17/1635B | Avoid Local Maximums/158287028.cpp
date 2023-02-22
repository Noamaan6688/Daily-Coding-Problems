// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll k,c=0;cin>>k;
    ll b[k+1];
    f(i,k) cin>>b[i];
    b[k]=0;
    fn(i,1,k-2)
    {
      if (b[i]>b[i-1] && b[i]>b[i+1]) b[i+1]=max(b[i],b[i+2]),c+=1;
    }
    cout<<c<<"\n";
    f(i,k) cout<<b[i]<<" ";cout<<"\n";
  }
 
  return 0;
}
/*
5
3
2 1 2
4
1 2 3 1
5
1 2 1 2 1
9
1 2 1 3 2 3 1 2 1
9
2 1 3 1 3 1 3 1 3
 
*/