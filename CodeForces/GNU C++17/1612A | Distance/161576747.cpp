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
  int x,y;cin>>x>>y;
  if(x%2!=0 && y%2!=0) cout<<(x+1)/2<<" "<<(y-1)/2<<"\n";
  else if(x%2==0 && y%2==0) cout<<x/2<<" "<<y/2<<"\n";
  else cout<<"-1 -1\n";
}
 
  return 0;
}
/*
10
49 3
2 50
13 0
0 41
42 0
0 36
13 37
42 16
42 13
0 0
 
*/