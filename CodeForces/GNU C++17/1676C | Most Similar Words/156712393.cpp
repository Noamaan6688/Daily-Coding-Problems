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
    int p,q,d=INT_MAX,c=0;cin>>p>>q;
    vector<string>v;
    while (p--)
    {
      string s;cin>>s;
      v.push_back(s);
    }
    sort(v.begin(),v.end());
    f1(i,v.size()-1)
    {
      
      f(j,v.size())
      {
        fn(k,j+1,v.size()-1)
        {
          c=0;
          string s1=v[j],s2=v[k];
          f(l,q) c+=abs(s1[l]-s2[l]);
          // cout<<s1<<" "<<s2<<" "<<c<<" "<<d<<"\n";
          d=min(c,d);
        }
      }
    }
    cout<<d<<"\n";
  }
 
  return 0;
}
/*
6
2 4
best
cost
6 3
abb
zba
bef
cdu
ooo
zzz
2 7
aaabbbc
bbaezfe
3 2
ab
ab
ab
2 8
aaaaaaaa
zzzzzzzz
3 1
a
u
y
 
*/