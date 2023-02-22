// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <deque>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    int k,c=1,d=0,e=0;cin>>k;
    int b[k];
    f(i,k) cin>>b[i];
    f(i,k)
    {
      if (b[i]==1)
      {
        if (d>0) c+=5;
        else c+=1;
        d+=1;e=0;
      }
      else
      {
        if (e>=1)
        {
          c=-1;
        }
        d=0;e+=1;
        if (c==-1) break;
      }  
    }
    cout<<c<<"\n";
  }
 
  return 0;
}