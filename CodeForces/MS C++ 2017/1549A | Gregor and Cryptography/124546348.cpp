// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int r;cin>>r;while (r--)
  {
    ll p;cin>>p;
    cout<<p/2<<" "<<p-1<<"\n";
  }
 
  return 0;
}