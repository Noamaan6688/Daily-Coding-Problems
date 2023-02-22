// Hi
#include <bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fn(i,j,k) for(int i=j;i<=k;i++)
#define ll long long int
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  string s;cin>>s;
  ll c=0,d=1;
  for (ll i=s.size()-1;i>=0;i-=1)
  {
   if (i==0) c+=(s[i]-'1')*d;
   else c+=(s[i]-'0')*d;
   d*=10;
  }
  cout<<c<<"\n";
 }
 
 return 0;  
}
/*
7
1
2
178
20
999999999
9000
987654321
 
*/