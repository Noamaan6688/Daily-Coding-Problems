// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 string s;cin>>s;
 ll k,c=0;cin>>k;
 f(i,s.size()) c+=s[i]-'a'+1;
 if (c<=k)
 {
  cout<<s<<"\n";
  return;
 }
 string s1=s,s2;
 unordered_map<char,ll>mp;
 ll j=-1,d=1;
 sort(s1.begin(),s1.end(),greater<char>());
 f(i,s1.size())
 {
  c-=s1[i]-'a'+1;
  mp[s1[i]]++;
  if (c<=k)
  {
   j=i;
   break;
  }
 }
 f(i,s.size())
 {
  if (mp[s[i]]>0) mp[s[i]]--;
  else cout<<s[i];
 }
 cout<<"\n";
 
 return;
}
 
int main()
{
 maan
 int r;cin>>r;while (r--)
 {
  solve();
 }
 
  return 0;
}
/*
5
abca
2
abca
6
codeforces
1
codeforces
10
codeforces
100
 
*/