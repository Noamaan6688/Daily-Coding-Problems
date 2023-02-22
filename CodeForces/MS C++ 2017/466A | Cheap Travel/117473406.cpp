// Hi
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main ()
{
 ll p,q,r,s,t=0;cin>>p>>q>>r>>s;
 t=min(p*r,(p/q)*s+min(((p%q)*r),s));
 cout<<t<<endl;
 
 return 0;
}