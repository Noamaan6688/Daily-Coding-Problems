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
    string s;cin>>s;
    int c=1;
    f(i,s.length()) c=max(c,s[i]-'0');
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
3
121
5
1000000000
 
*/