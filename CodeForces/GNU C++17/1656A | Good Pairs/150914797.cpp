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
  int r;cin>>r;f1(i,r)
  {
    ll k,c1=INT_MIN,c2=INT_MAX,d1=0,d2=0;cin>>k;
    ll b[k];
    f(i,k)
    {
      cin>>b[i];
      if (b[i]>c1)
      {
        c1=b[i];d1=i;
      }
      if (b[i]<c2)
      {
        c2=b[i];d2=i;
      }
    }
    cout<<d2+1<<" "<<d1+1<<"\n";
  }
 
  return 0;
}
/*
3
3
5 2 7
5
1 4 2 2 3
1
2
 
*/