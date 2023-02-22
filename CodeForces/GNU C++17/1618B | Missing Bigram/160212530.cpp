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
   int k;cin>>k;
   vector<string>v;
   f(i,k-2)
   {
    string s3;cin>>s3;
    v.push_back(s3);
   }
   string s;
   f1(i,k-3)
   {
    string s1=v[i-1],s2=v[i];
    if (i==1) s+=s1[0];
    if (s1[1]==s2[0]) s+=s2[0];
    else {s+=s1[1];s+=s2[0];}
    if (i==(k-3)) s+=s2[1];
   }
   if (k==3)
   {
    s+=v[k-3];
    s+=v[k-3][1];
   }
   if (s.size()!=k) s+=v[k-3][1];
   cout<<s<<"\n";
  }  
 
  return 0;
}
/*
4
7
ab bb ba aa ba
7
ab ba aa ab ba
3
aa
5
bb ab bb
 
*/