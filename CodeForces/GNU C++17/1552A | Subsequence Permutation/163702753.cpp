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
  string s1,s2="";cin>>s1;
  s2=s1;
  sort(begin(s1),end(s1));
  f(i,s1.length()) if(s1[i]!=s2[i]) c+=1;
  cout<<c<<"\n";
 }
 
  return 0;
}
/*
4
3
lol
10
codeforces
5
aaaaa
4
dcba
 
*/