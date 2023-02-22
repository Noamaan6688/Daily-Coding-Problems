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
  int c=0,i=0;
  while (i<s.size())
  {
   if(s[i]=='1')
   {
    i+=1;continue;
   }
   c+=1;
   while(s[i]=='0' && i<s.size())i+=1;
  }
  if(c>1)cout<<2<<"\n";
  else cout<<c<<"\n"; 
 
 }
 
  return 0;
}
/*
6
01
1111
01100
101
0000
01010
 
*/