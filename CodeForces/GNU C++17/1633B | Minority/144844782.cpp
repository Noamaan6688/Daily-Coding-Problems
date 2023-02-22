// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
bool x(int k)
{
  if (k==0) return false;
  return (ceil(log2(k))==floor(log2(k)));
}
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    string s;cin>>s;
    int c=0,n=s.size();
    f(i,s.size())
    {
      if (s[i]=='0') c+=1;
    }
    if (c==n/2 && n%2==0) cout<<c-1<<"\n";
    else cout<<min(c,n-c)<<"\n";
  }
 
  return 0;
}
/*
4
01
1010101010111
00110001000
1
 
*/