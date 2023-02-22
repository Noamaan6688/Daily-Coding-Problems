// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  string s,s1="Yes";cin>>s;
  char c=s[0];
  int d=0,e=-1;
  f(i,3)
  {
    if (s[0]==s1[i])
    {
      d=1,e=i;break;
    }
  }
  if (d)
  {
    f(i,s.size())
    {
      if (s[i]!=s1[(i+e)%3]) d=0;
    }
    if (d) cout<<"YES\n";
    else cout<<"NO\n";
  }
  else cout<<"NO\n";
 
 
  // if (s.size()<3)
  // {
  //   if (s.size()==1)
  //   {
  //     if (s[0]=='e' || s[0]=='s' || s[0]=='Y') cout<<"YES\n";
  //     else cout<<"NO\n";
  //   }
  //   else
  //   {
  //     if (s[0]=='e' && s[1]=='s') cout<<"YES\n";
  //     else if (s[0]=='s' && s[1]=='Y') cout<<"YES\n";
  //     else if (s[0]=='Y' && s[1]=='e') cout<<"YES\n";
  //     else cout<<"NO\n";
  //   }
  // }
  // else
  // {
  //   if (c=='Y')
  //   {
  //     f(i,s.size()-2)
  //     {
  //       if (s[i]!='Y' && s[i+1]!='e' && s[i+2]!='s') d=0;
  //       i+=2;
  //     }
  //   }
  //   else if (c=='e')
  //   {
  //     f(i,s.size()-2)
  //     {
  //       if (s[i]!='e' && s[i+1]!='s' && s[i+2]!='Y') d=0;
  //       i+=2;
  //     }
  //   }
  //   else if (c=='s')
  //   {
  //     f(i,s.size()-2)
  //     {
  //       if (s[i]!='s' && s[i+1]!='Y' && s[i+2]!='e') d=0;
  //       i+=2;
  //     }
  //   }
  //   else d=0;
  //   // cout<<c<<" "<<s<<"\n";
  //   if (d) cout<<"YES\n";
  //   else cout<<"NO\n";
  // }
  return;
}
 
int main()
{
  maan
  int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
12
YES
esYes
codeforces
es
se
YesY
esYesYesYesYesYesYe
seY
Yess
sY
o
Yes
 
*/