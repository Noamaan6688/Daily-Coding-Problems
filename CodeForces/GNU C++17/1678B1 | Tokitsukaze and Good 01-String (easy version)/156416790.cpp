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
    int k,c=0,d=0;cin>>k;
    string s;cin>>s;
    f1(i,k-1)
    {
      if (s[i]!=s[i-1]) c+=1;
      i+=1;
    }
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
5
10
1110011000
8
11001111
2
00
2
11
6
100110
 
*/