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
    int k;cin>>k;
  int b[k];
  map<int,int>mp;
  f1(i,k)
  {
   cin>>b[i];
   mp[b[i]]++;
  }
  f1(i,k)
  {
   if(mp[b[i]]==1)
   {
    cout<<i<<"\n";
    break;
   }
  }
  }
 
  return 0;
}
/*
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10
 
*/
 
    