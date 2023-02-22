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
 // int r;cin>>r;while (r--)
 {
  int k,c=0,i=1;cin>>k;
  while (c<k)
  {
   c+=i*(i+1)/2;
   i+=1;
   if (c>=k) break;
  }
  if (c==k) cout<<i-1<<"\n";
  else cout<<i-2<<"\n";
 }
 
  return 0;
}
/*
7
35
25
 
*/
 
    