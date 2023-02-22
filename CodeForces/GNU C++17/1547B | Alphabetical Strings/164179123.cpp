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
    string s;cin>>s;
  bool t=true;
  int k=s.size(),m=0,n=k-1;
  while (k>0)
    {
   char c=k-1+'a';
   if (s[m]==c) m+=1;
   else if (s[n]==c) n-=1;
   else
      {
        t=false;
    break;
   }
      k-=1;
  }
  if (t) cout<<"YES\n";
  else cout<<"NO\n";
  }
 
  return 0;
}
/*
11
a
ba
ab
bac
ihfcbadeg
z
aa
ca
acb
xyz
ddcba
 
*/