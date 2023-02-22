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
  int b[k+1];
  f1(i,k) cin>>b[i];
  if (b[1]==1) c=0;
  f1(i,k) if(b[i]==0 && b[i+1]==1) c=i;
  if (b[k]==0) c=k;
  if(c==-1)
  {
   cout<<"-1\n";
   continue;
  }
  if (c==0) cout<<k+1<<" ";
  f1(i,k)
  {
   cout<<i<<" ";
   if(c==i) cout<<k+1<<" ";
  }
  cout<<"\n";
 }
 
  return 0;
}
/*
2
3
0 1 0
3
1 1 0
 
*/