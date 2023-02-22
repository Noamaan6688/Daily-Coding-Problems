// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
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
 c=k/3;
 if (k%3==0) cout<<c<<" "<<c+1<<" "<<c-1<<"\n";
 else if (k%3==1) cout<<c<<" "<<c+2<<" "<<c-1<<"\n";
 else cout<<c+1<<" "<<c+2<<" "<<c-1<<"\n";
  }
 
  return 0;
}
/*
6
11
6
10
100000
7
8
 
*/