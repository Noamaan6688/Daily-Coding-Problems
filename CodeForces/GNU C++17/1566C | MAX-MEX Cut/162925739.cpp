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
  int k,c=0;cin>>k;
  string s1,s2;cin>>s1>>s2;
  f(i,k)
  {
   if(s1[i]!=s2[i]) c+=2;
   else if(s1[i]=='1' && s2[i]=='1')
   {
    if(s1[i+1]=='0' && s2[i+1]=='0') c+=2,i+=1;
   }
   else if(s1[i]=='0' && s2[i]=='0')
   {
    if(s1[i+1]=='1'&& s2[i+1]=='1') c+=2,i++;
    else c+=1;
   }
  // cout<<c<<i<<endl;
  }
  cout<<c<<"\n";
 }
 
  return 0;
}
/*
4
7
0101000
1101100
5
01100
10101
2
01
01
6
000000
111111
 
*/