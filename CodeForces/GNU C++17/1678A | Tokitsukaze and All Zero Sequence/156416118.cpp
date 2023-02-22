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
    int k,c=-1;cin>>k;
    unordered_map<int,int>mp(k);
    f(i,k)
    {
      int n;cin>>n;
      mp[n]++;
    }
    for (auto i:mp)
    {
      if (mp[0]>0)
      {
        c=k-mp[0];break;
      }
      else if (i.second>1 && i.first!=0)
      {
        c=k;break;
      }
    }
    if (c==-1) cout<<k+1<<"\n";
    else cout<<c<<"\n";
  }
 
  return 0;
}
/*
3
3
1 2 3
3
1 2 2
3
1 2 0
 
*/