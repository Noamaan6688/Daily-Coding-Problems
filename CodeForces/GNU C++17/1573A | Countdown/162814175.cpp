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
  ll k,c=0;cin>>k;
  string s;cin>>s;
  f(i,k)
  {
   c+=s[i]-'0';
   if(s[i]!='0' && i!=(k-1)) c++;
  }
  cout<<c<<"\n";
 }
 
  return 0;
}
/*
7
3
007
4
1000
5
00000
3
103
4
2020
9
123456789
30
001678294039710047203946100020
 
*/