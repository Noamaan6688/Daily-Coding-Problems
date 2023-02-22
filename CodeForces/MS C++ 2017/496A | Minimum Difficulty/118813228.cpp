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
  int k,c=1000,d=0,e=0;cin>>k;
  int *b=new int[k];
  f(i,k)
  {
    cin>>b[i];
    if (i>=2)
    {
      if (b[i]-b[i-2]<c)
      {
        c=b[i]-b[i-2];
        d=i;
      }
    }
  }
  b[d-1]=b[d-2];
  f(i,k-1)
  {
    if (b[i+1]-b[i]>e) e=b[i+1]-b[i];
  }
  cout<<e<<endl;
 
  return 0;
}