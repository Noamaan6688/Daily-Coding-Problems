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
  map<char,int>mp;
    string s;cin>>s;
    int c=0;
    f(i,s.size())
    {
      mp[s[i]]++;
      if (mp[s[i]]<3) c+=1;
    }
    cout<<c/2<<"\n";
 }
 
  return 0;
}
/*
5
kzaaa
codeforces
archive
y
xxxxxx
 
*/