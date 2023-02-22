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
    int p,q;cin>>p>>q;
    string s;cin>>s;
    bool t=true;
    f(i,p/2+1)
    {
      if (s[i]!=s[p-i-1]) t=false;
    }
    if (t || q==0) cout<<"1\n";
    else cout<<"2\n";
  }
 
  return 0;
}
/*
4
3 2
aab
3 3
aab
7 1
abacaba
2 0
ab
 
*/