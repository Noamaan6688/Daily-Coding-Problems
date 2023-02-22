// Hi
#include <bits/stdc++.h>
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
    int k;cin>>k;
    string s;cin>>s;
    if (k>2) cout<<"NO\n";
    else if (k==2)
    {
      if ((s[0]=='0' && s[1]=='0') || (s[0]=='1' && s[1]=='1')) cout<<"NO\n";
      else cout<<"YES\n";
    }
    else
    {
      cout<<"YES\n";
    }
  }
 
  return 0;
}
/*
4
1
1
2
10
2
01
4
1010
 
*/