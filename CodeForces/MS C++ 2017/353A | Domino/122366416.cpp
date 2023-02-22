// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int r,c1=0,c2=0,c3=0,s1=0,s2=0;cin>>r;
  while (r--)
  {
    int m,n;cin>>m>>n;
    s1+=m;s2+=n;
    if ((m%2==0 && n%2==1) || (m%2==1 && n%2==0)) c1+=1;
    if (m%2!=0) c2+=1;
    if (n%2!=0) c3+=1;
  }
  if (c2%2==0 && c3%2==0) cout<<0<<"\n";
  else if (c1>0 && c1%2==0) cout<<1<<"\n";
  else cout<<-1<<"\n";
 
 return 0;
}