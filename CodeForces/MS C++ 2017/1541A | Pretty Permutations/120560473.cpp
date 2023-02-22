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
  int r;cin>>r;
  while (r--)
  {
    int k;cin>>k;
    if (k%2==0)
    { for (int i=1;i<=k-1;i+=2)
      {
        cout<<i+1<<" "<<i<<" ";
      }
      cout<<endl;
    }
    else
    {
      for (int i=1;i<=k-1;i+=2)
      {
        if (i!=k-2) cout<<i+1<<" "<<i<<" ";
        else cout<<k-1<<" "<<k<<" "<<k-2<<" ";
      }
      cout<<endl;
    }  
  }    
 
  return 0;
}