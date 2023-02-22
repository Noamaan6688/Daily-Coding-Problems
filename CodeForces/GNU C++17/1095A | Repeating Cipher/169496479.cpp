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
  int k,c=0,d=1;cin>>k;
  string s,s1;cin>>s;
  for (int i=0;i<s.size();i+=1)
  {
   s1+=s[i];
   i+=d;
   d+=1;
  }
  cout<<s1<<"\n";
 }
 
  return 0;
}
/*
10
ooopppssss
 
*/
 
    