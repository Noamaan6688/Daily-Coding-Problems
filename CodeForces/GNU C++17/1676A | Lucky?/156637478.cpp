// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    int c1=0,c2=0;
    string s;cin>>s;
    f(i,3) c1+=s[i]-'0';
    fn(i,3,5) c2+=s[i]-'0';
    if (c1==c2) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
5
213132
973894
045207
000000
055776
 
*/