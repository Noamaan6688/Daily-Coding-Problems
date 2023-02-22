// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  ll k,c=0,c2=0;cin>>k;
  ll b[k];
  f1(i,k)
  {
   cin>>b[i];
   if(b[i]%2==0) c+=1;
   else c2+=1;
  }
  if(abs(c-c2)>1)
  {
   cout<<"-1\n";
   continue;
  }
  ll t=1,tt=1,s1=0,s2=0;
  f1(i,k)
  {
   if(b[i] & 1)
   {
    s1+=abs(i-t);
    t+=2;
   }
   else
   {
    s2+=abs(i-tt);
    tt+=2;
   }
  }
  if (c>c2) cout<<s2<<"\n";
  else if (c<c2) cout<<s1<<"\n";
  else cout<<min(s1,s2)<<"\n";
  
 }
 
 return 0;
}
/*
5
3
6 6 1
1
9
6
1 1 1 2 2 2
2
8 6
6
6 2 3 4 5 1
 
*/