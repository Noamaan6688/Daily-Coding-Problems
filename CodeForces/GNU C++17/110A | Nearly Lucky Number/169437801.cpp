// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i=0;i<n;i++)
#define f1(i, n) for (int i=1;i<=n;i++)
#define fn(i, j, k) for (int i=j;i<=k;i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 // int r;cin>>r;while (r--)
 {
  string s;cin>>s;
  int c=0;
  f(i,s.size()) if (s[i]=='4' || s[i]=='7') c+=1;
  // cout<<c<<"\n";
  if (c>0)
  {
   while (c>0)
   {
    if ((c%10)!=4 && (c%10)!=7)
    {
     cout<<"NO\n";
     return 0;
    }
    c/=10;
   }
   cout<<"YES\n";
  }
  else cout<<"NO\n";
  return 0;
 }
 
  return 0;
}
/*
7747774
 
*/
 
    