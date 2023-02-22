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
  int k;cin>>k;
  char **b=new char*[k];
  f(i,k)
  {
    b[i]=new char[k];
  }
  f(i,k)
  {
    f(j,k)
    {
      cin>>b[i][j];
    }
  }
  if (k==1)
  {
    cout<<"YES"<<endl;
    return 0;
  }
  else
  {
    int c=b[0][0],d=b[0][1];
    if (c==d)
    {
      cout<<"NO"<<endl;
      return 0;
    }
    else
    {
      f(i,k)
      {
        f(j,k)
        {
          if (j==i || j==k-1-i)
          {
            if (b[i][j]!=c)
            {
              cout<<"NO"<<endl;
              return 0;
            }
          }
          else
          {
            if (b[i][j]!=d)
            {
              cout<<"NO"<<endl;
              return 0;
            }
          }
        }
      }
    }  
  }  
  cout<<"YES"<<endl;
 
  return 0;
}