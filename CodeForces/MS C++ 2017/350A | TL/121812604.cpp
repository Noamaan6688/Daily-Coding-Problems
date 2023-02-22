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
  int p,q;cin>>p>>q;
  int *b1=new int[p];
  int *b2=new int[q];
  f(i,p) cin>>b1[i];
  f(i,q) cin>>b2[i];
  sort(b1,b1+p);sort(b2,b2+q);
  fn(i,2*b1[0],1000)
  {
    if (i>=b1[p-1] && i<b2[0])
    {
      cout<<i<<"\n";
      return 0;
    }
    if (i>b2[0]) break;
  }
  cout<<-1<<"\n";
 
 return 0;   
}