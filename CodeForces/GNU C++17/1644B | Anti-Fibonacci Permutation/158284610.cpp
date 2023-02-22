// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    int k,c=0,d=1,e=0;cin>>k;
    c=k,e=k;
    while (c--)
    {
      for (int i=k;i>=1;i-=1)
      {
        if (i==d) cout<<"1 ";
        else
        {
          cout<<e<<" ";e-=1;
        }
      }
      cout<<"\n";
      d+=1;e=k;
    }
  }
 
  return 0;
}
/*
2
4
3
 
*/