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
    int k,s=0,c=0;cin>>k;
    if (k%3==0 || k%3==2)
    {
      while (s!=k)
      {   
        if (c==0)
        {
          s+=2;
          cout<<"2";c=1;
        }
        else
        {
          if (s==k)break;
          s+=1;
          cout<<"1";c=0;
        }
      }
      cout<<"\n";
    }
    else if (k%3==1)
    {
      c=1;
      while (s!=k)
      {
        if (c==0)
        {
          s+=2;
          cout<<"2";c=1;
        }
        else
        {
          if (s==k)break;
          s+=1;
          cout<<"1";c=0;
        }
      }
      cout<<"\n";  
    }
  }
 
  return 0;
}
/*
5
1
2
3
4
5
 
*/