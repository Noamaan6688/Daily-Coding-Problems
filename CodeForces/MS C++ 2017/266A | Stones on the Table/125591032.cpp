// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int p,c=0;cin>>p;
  string s;cin>>s;
  f(i,p-1)
  {
    if (s[i]==s[i+1]) c+=1;
  }
  cout<<c<<"\n";
 
  return 0;
}