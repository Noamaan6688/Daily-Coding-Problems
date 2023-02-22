// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
   int k;cin>>k;
   while (k--)
   {
       int p,q,r,s;cin>>p>>q>>r>>s;
       if (min(p,q)>max(r,s) || max(p,q)<min(r,s)) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }
 
  return 0;
}