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
 int p,q,c=0,d=0;cin>>p>>q;
 string s;cin>>s;  
 f(i,q) if (s[i]=='W') c+=1;
 d=c;
 fn(i,q,p-1)
 {
  if (s[i-q]=='W') c-=1;
  if (s[i]=='W') c+=1;
  d=min(d,c);
 }
 cout<<d<<"\n";                               
  }  
 
  return 0;
}
/*
4
5 3
BBWBW
5 5
BBWBW
5 1
BBWBW
1 1
W
 
*/