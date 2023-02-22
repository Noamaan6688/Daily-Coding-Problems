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
    int p,q,n;cin>>p>>q;
    n=p+q;
  string s;cin>>s;
  f(i,n) if(s[i]=='?') s[i]=s[n-i-1];
    // cout<<s<<endl;
  int c1=0,c2=0;
  f(i,n)
  {
   if(s[i]=='0') c1++;
   else if(s[i]=='1') c2++;
  }
  p-=c1;
  q-=c2;
    // cout<<p<<" "<<q<<endl;
  f(i,n/2)
  {
   if(s[i]==s[n-i-1] && s[i]=='?')
   {
    if (p>1) 
        { 
          s[i]='0';
          s[n-i-1]='0';
          p-=2;
        }
    else if (q>1) 
        { 
          s[i]='1';
          s[n-i-1]='1';
          q-=2;
        }
   }
  }
  f(i,n)
  {
   if(s[i]=='?')
   {
    if(p>0) s[i]='0',p-=1;
    else s[i]='1',q-=1; 
   }
  }
   string s1=s;
  reverse(s1.begin(),s1.end());
  if(s==s1 && p==0 && q==0) cout<<s<<"\n";
  else cout<<"-1\n";
  }
 
  return 0;
}
/*
9
4 4
01?????0
3 3
??????
1 0
?
2 2
0101
2 2
01?0
0 1
0
0 3
1?1
2 2
?00?
4 3
??010?0
 
*/
 
    