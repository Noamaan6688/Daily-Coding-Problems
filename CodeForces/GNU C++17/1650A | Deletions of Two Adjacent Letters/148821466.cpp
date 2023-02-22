// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll  unsigned long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    string s;cin>>s;
    char c;cin>>c;
    bool t=false;
    f(i,s.size())
    {
      if (s[i]==c)
      {
        if (i%2==0 && (s.size()-i-1)%2==0)
        {
          t=true;break;
        } 
      }
    }
    if (t) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
5
abcde
c
abcde
b
x
y
aaaaaaaaaaaaaaa
a
contest
t
 
*/