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
    int p,q;cin>>p>>q;
    ll b[p],c=-1;
    f(i,p)cin>>b[i];
    sort(b,b+p);
    reverse(b,b+p);
    f1(i,p-1) b[i]+=b[i-1];
    while (q--)
    {
      ll k,start=0,end=p-1;cin>>k;
      c=-1;
      while (start<=end)
      {
          int mid=(start+end)/2;
          if (b[mid]<k)
              start=mid+1;
          else
          {
            c=mid;
            end=mid-1;
          }
      }
      if(c==-1) cout<<"-1\n";
      else cout<<c+1<<"\n";
    }
  }
 
  return 0;
}
/*
3
8 7
4 3 3 1 1 4 5 9
1
10
50
14
15
22
30
4 1
1 2 3 4
3
1 2
5
4
6
 
*/