// Hi
#include <iostream>
#include <string>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main ()
{
 int p,q,r;cin>>p>>q>>r;
 int c=0;
 if (p+q+r>c) c=p+q+r;
 if (p*(q+r)>c) c=p*(q+r);
 if ((p+q)*r>c) c=(p+q)*r;
 if (p+(q*r)>c) c=p+(q*r);
 if (p*q*r>c) c=p*q*r;
 if (p+q*r>c) c=p+q*r;
 cout<<c<<endl;
 
 return 0;
}