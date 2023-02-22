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
 int p,q;cin>>p>>q;
 if (p>=q)
 {
  fn(i,(p+1)/2,p)
  {
   if (i%q==0)
   {
    cout<<i<<endl;
    break;
   }
  } 
 }
 else cout<<-1<<endl;
 
 return 0;
}