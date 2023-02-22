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
  string s;
  int **b=new int*[p];
  f(i,p) b[i]=new int[q];
  f(i,p)
  {
    cin>>s;
    f(j,q)
    {
      b[i][j]=int(s[j]);
    }
  }
  f(j,q)
  {
    int c=b[0][j];
    f(i,p)
    {
      if (b[i][j]>c)
      {
        c=b[i][j];
      }
    }
    f(i,p)
    {
      if (b[i][j]==c)
      {
        b[i][j]=0;
      }
    }
  }
  int e=0;
  f(i,p)
  {
    f(j,q)
    {
      if (b[i][j]==0)
      {
        e+=1;break;
      }  
    }
  }
  cout<<e<<"\n";
 
 return 0;
}