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
    int a,b,c,d,e=0;cin>>a>>b>>c>>d;
    if (b>a) e+=1;
    if (c>a) e+=1;
    if (d>a) e+=1;
    cout<<e<<"\n";
  }
 
  return 0;
}
/*
4
2 3 4 1
10000 0 1 2
500 600 400 300
0 9999 10000 9998
 
*/