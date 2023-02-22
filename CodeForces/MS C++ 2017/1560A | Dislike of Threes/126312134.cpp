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
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int r;cin>>r;while (r--)
  {
    int p,c=1,d=1;cin>>p;
    vector<int>v;
    while (c<=p)
    {
      if ((d%3!=0) && (d%10!=3))
      {
        v.push_back(d);c+=1;
      }
      d+=1;
    }
    cout<<v[v.size()-1]<<"\n";
  }
 
  return 0;
}