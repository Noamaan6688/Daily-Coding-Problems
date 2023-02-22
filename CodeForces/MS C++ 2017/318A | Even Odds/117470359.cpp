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
 ll p,q;cin>>p>>q;
 if (q>(p+1)/2) cout<<2*(q-(p+1)/2)<<endl;
 else cout<<(2*q)-1<<endl;
 
 return 0;
}