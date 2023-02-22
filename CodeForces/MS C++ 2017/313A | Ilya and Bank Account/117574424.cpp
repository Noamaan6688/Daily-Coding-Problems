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
 ll k;cin>>k;
 if (k>=0) cout<<k<<endl;
 else
 {
  cout<<max(((k/100)*10)+(k%10),k/10)<<endl;
 }
 
 return 0;
}