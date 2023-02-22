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
#define ll long long int
 
using namespace std;
 
int main()
{
  int r,c=0;cin>>r;while (r--)
  {
    int p,q;cin>>p>>q;
    if (q-p>=2) c+=1;
  }
  cout<<c<<"\n";
 
  return 0;
}
 