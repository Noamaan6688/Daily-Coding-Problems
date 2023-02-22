// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
  ll p,q;cin>>p>>q;
  if (q-p>1)
  {
    if (p%2==0)
    {
      cout<<p<<" "<<p+1<<" "<<p+2<<endl;
      return 0;
    }
    else
    {
      if (q-p>2)
      {
        cout<<p+1<<" "<<p+2<<" "<<p+3<<endl;
        return 0;
      }  
    }  
  }
  cout<<-1<<endl;
 
  return 0;
}