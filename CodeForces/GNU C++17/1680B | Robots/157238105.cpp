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
    int p,q,c1=6,c2=6;cin>>p>>q;
    char b[p][q];
    f(i,p) f(j,q) cin>>b[i][j];
    f(i,p)f(j,q)
    {
      if (b[i][j]=='R')
      {
        c1=min(i,c1);
        c2=min(j,c2);
      }
    }
    if (b[c1][c2]=='R') cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
6
1 3
ERR
2 2
ER
RE
2 2
ER
ER
1 1
R
4 3
EEE
EEE
ERR
EER
3 3
EEE
EER
REE
 
*/