// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i=0;i<n;i++)
#define f1(i, n) for (int i=1;i<=n;i++)
#define fn(i, j, k) for (int i=j;i<=k;i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
    int k;cin>>k;
    int x1=-1,x2=-1,y1=-1,y2=-1,c1=-1,c2=-1,d1=-1,d2=-1;
    f(i,k)
    {
      f(j,k)
      {
        char c;cin>>c;
        if (c=='*')
        {
          if (x1!=-1)
          {
            x2=i;y2=j;
          }
          else
          {
            x1=i;y1=j;
          }
        }
      }
    }
    if (x2==x1)
    {
      if (x1>0) c1=x1-1,c2=x1-1;
      else c1=x1+1,c2=x2+1;
      d1=y1;
      d2=y2;
    }
    else if (y1==y2)
    {
      if (y1==0) d1=y1+1,d2=y1+1;
      else d1=y1-1,d2=y1-1;
      c1=x1;
      c2=x2;
    }
    else
    {
      c1=x2;
      d1=y1;
      c2=x1;
      d2=y2;
    }
    f(i,k)
    {
      f(j,k)
      {
        if (c1==i && d1==j) cout<<"*";
        else if (c2==i && d2==j) cout<<"*";
        else if (x1==i && y1==j) cout<<"*";
        else if (x2==i && y2==j) cout<<"*";
        else cout<<".";
      }
      cout<<"\n";
    }
  }
 
  return 0;
}
/*
6
4
..*.
....
*...
....
2
*.
.*
2
.*
.*
3
*.*
...
...
5
.....
..*..
.....
.*...
.....
4
....
....
*...
*...
 
*/
 
    