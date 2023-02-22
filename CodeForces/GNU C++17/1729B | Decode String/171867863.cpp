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
  int k,c=0;cin>>k;
  string s,s1="";cin>>s;
  
  for (int i=k-1;i>=0;i-=1)
  {
    if ((s[i]-'0')==0 && c==0)
    {
      c=1;continue;
    }  
    if (c==0)
    {
      int c1=s[i]-'0'+96;
      // cout<<c1<<"\n";
      char c2=(char)c1;
      // cout<<c2<<"\n";
      s1+=c2;
    }
    else
    {
      int c1=((s[i]-'0'+((s[i-1]-'0')*10))+96);
      // cout<<c1<<"\n";
      char c2=(char)c1;
      // cout<<c2<<"\n";
      s1+=c2;
      i-=1;c=0;
    }
    // cout<<s1<<"\n";
  }
  reverse(s1.begin(),s1.end());
  cout<<s1<<"\n";
 
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
9
6
315045
4
1100
7
1213121
6
120120
18
315045615018035190
7
1111110
7
1111100
5
11111
4
2606
 
*/