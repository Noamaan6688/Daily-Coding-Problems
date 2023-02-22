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
   int a,b,c,d,e,f,g,h,i;
   cin>>a>>b>>c>>d>>e>>f>>g>>h;
    i=min((b*c)/g,(d*e));
    i=min(i,(f/h));
   cout<<i/a<<endl;
 
  return 0;
}