// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  int k,c=0,d=0;cin>>k;
  int b[100001]; 
  f1(i,k) cin>>b[i];
  f1(i,k)
  {
   while ((b[i]%(i+1-d))==0 && (d+1-i<=0)) d+=1;
   if (d==i) c=1;
   d=0;
  }
  if (c) cout<<"NO\n";
  else cout<<"YES\n";
 }
 
 return 0;
}
/*
5
3
1 2 3
1
2
2
7 7
10
384836991 191890310 576823355 782177068 404011431 818008580 954291757 160449218 155374934 840594328
8
6 69 696 69696 696969 6969696 69696969 696969696
 
*/