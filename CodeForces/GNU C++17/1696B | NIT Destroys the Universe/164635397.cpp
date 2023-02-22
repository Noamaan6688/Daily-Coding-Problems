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
 int k,c=0;cin>>k;
 int b[k];
 f(i,k) cin>>b[i];
 f(i,k-1) if(b[i+1]!=0 && b[i]==0) c+=1; 
 if (b[0]!=0) c+=1;
 if (c>=3) c=2; 
 cout<<c<<"\n";
  }
 
  return 0;
}
/*
4
4
0 0 0 0
5
0 1 2 3 4
7
0 2 3 0 1 2 0
1
1000000000
 
*/
 
 