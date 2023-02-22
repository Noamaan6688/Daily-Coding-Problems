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
 int r;cin>>r;while (r--)
 {
    int k;cin>>k;
    string s;cin>>s;
  int c1=0,c2=0;
  bool t=true;
  f(i,k)
    {
   if(s[i]=='T') c1++;
   if(s[i]=='M') c2++;
   if(c2>c1 || (c1-c2)>k/3 )
      {
    t=0;
    break;
   }
  }
  if(t && c2*2==c1) cout<<"YES\n";
  else cout<<"NO\n";
  }
 
  return 0;
}
/*
5
3
TMT
3
MTT
6
TMTMTT
6
TMTTTT
6
TTMMTT
 
*/
 
    