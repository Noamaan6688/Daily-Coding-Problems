// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j;i<=k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
    int k,c=0;cin>>k;
  string s;cin>>s;
  f(i,k-2)
    {
   fn(j,i+2,k-1)
      {
    if(s[i]!=s[i+1] && s[i]==s[j]) c+=1;
   }
  }
  if (!c) cout<<"YES\n";
  else cout<<"NO\n";
  }
 
  return 0;
}
/*
5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB
 
*/