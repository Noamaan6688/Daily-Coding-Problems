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
    int a,b,c;cin>>a>>b>>c;
    f1(i,c+1)
    {
   f1(j,b/(c+1)) cout<<("R");
      if(i<=b%(c+1)) cout<<("R");
   if(i<=c) cout<<("B");
    }
    cout<<"\n";
  }
 
  return 0;
}
/*
3
7 4 3
6 5 1
19 13 6
 
*/