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
 f1(i,p)
 {
  f1(j,q)
  {
   if (i%2==1) cout<<"#";
   else
   {
    if ((i/2)%2==1)
    {
     if (j!=q) cout<<".";
     else cout<<"#";
    }
    else
    {
     if (j!=1) cout<<".";
     else cout<<"#";
    } 
   }
  }
  cout<<endl;
 }
 
 return 0;
}