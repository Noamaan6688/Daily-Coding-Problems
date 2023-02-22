// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <deque>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    string s;cin>>s;
    int c=0;
    f(i,s.size())
    {
      if (s[i]=='N')c+=1;
    }
    if (c==1) cout<<"NO\n";
    else cout<<"YES\n";
  }
 
  return 0;
}