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
 int p,q;cin>>p>>q;
 string s;cin>> s;
 int b[p+1];
  f1(i,p) b[i]=b[i-1]+s[i-1]-96;
 while (q--)
  {
  int m,n;
  cin>>m>>n;
  cout<<b[n]-b[m-1]<<"\n";
  }
 
  return 0;
}
/*
13 7
sonoshikumiwo
1 5
2 10
7 7
1 13
4 8
2 5
3 9
 
*/