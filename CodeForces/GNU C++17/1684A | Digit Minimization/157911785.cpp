// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    string s;cin>>s;
    if (s.size()==2) cout<<s[1]-'0'<<"\n";
    else
    {
      int c=INT_MAX;
      f(i,s.size()) c=min(c,s[i]-'0');
      cout<<c<<"\n";
    }
  }
 
  return 0;
}
/*
3
12
132
487456398
 
*/