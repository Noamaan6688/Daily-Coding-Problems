// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  string s1,s2;cin>>s1>>s2;
  unordered_set<char>st;
  f(i,s1.size()) st.insert(s1[i]);
  f(i,s2.size()) st.insert(s2[i]);
  cout<<st.size()-1<<"\n";
  return;
}
 
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
5
rb
br
cc
wb
aa
aa
ab
cd
yy
xx
 
*/