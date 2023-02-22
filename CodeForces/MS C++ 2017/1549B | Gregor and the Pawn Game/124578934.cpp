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
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define max 1000000000
 
using namespace std;
 
int main()
{
  int r;cin>>r;while (r--)
  {
    ll k,c=0,d=0;cin>>k;
    string b1,b2;cin>>b1>>b2;
    for (ll i=0;i<k;i+=1)
    {
      if (b2[i]=='1')
      {
        if (b1[i]=='0') c+=1;
        else
        {
          if (i==0)
          {
            if (b1[i+1]=='1')
            {
              c+=1;b1[i+1]='0';
            }
          }
          else if (i==k-1)
          {
            if (b1[i-1]=='1')
            {
              c+=1;b1[i-1]='0';
            }  
          }
          else
          {
            if (b1[i-1]=='1')
            {
              c+=1;b1[i-1]='0';
            }  
            else if (b1[i+1]=='1')
            {
              c+=1;b1[i+1]='0';
            }  
          }
        }
      }
    }
    cout<<c<<"\n";
  }
 
 return 0;
}