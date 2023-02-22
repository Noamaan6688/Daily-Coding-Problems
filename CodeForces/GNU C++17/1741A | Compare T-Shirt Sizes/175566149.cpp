// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
 
void solve()
{
  string s1,s2;cin>>s1>>s2;
  int n1=s1.size(),n2=s2.size();
  if (s1[n1-1]<s2[n2-1]) cout<<">\n";
  else if (s1[n1-1]>s2[n2-1]) cout<<"<\n";
  else
  {
    if (s1[n1-1]=='L')
    {
      if (n1>n2) cout<<">\n";
      else if (n1<n2) cout<<"<\n";
      else cout<<"=\n";
    }
    else if (s1[n1-1]=='S')
    {
      if (n1>n2) cout<<"<\n";
      else if (n1<n2) cout<<">\n";
      else cout<<"=\n";
    }
    else cout<<"=\n";
  }
 
  return;
}
 
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
6
XXXS XS
XXXL XL
XL M
XXL XXL
XXXXXS M
L M
 
*/