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
  int k,c=-1;cin>>k;
  string s;cin>>s;
  f1(i,k-1)
  {
   if(s[i]!=s[i-1])
   {
    c=i;break;
   }
  }
  if (c>-1) cout<<c<<" "<<c+1<<"\n";
  else cout<<"-1 -1\n";
 }
 
  return 0;
}
/*
4
1
a
6
abbaba
6
abbaba
9
babbabbaa
 
*/