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
  int c=0;
  f(i,s.size())
  {
   fn(j,i+1,s.size()-1)
   {
    if (((s[i]-'0')*10+(s[j]-'0'))%25==0)
    c=s.size()-i-2;
   }
  }
  cout<<c<<"\n";
 }
 
  return 0;
}
/*
5
100
71345
3259
50555
2050047
 
*/