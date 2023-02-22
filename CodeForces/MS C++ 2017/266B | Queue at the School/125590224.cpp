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
  int p,q;cin>>p>>q;
  string s;cin>>s;
  f(i,q)
  {
    f1(j,p-1)
    {
      if ((s[j]=='G') && (s[j-1]=='B'))
      {
        s[j]='B';s[j-1]='G';
        j+=1;
      }
    }
  }
  cout<<s<<"\n";
 
  return 0;
}