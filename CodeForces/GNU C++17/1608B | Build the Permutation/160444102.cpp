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
    int l=1,t=a;
    if(abs(b-c)>1||b+c>a-2){cout<<"-1\n";continue;}
    for(int i=1;i<=b+c;i++)cout<<(((b<c)+i)&1?l++:t--)<<" ";
    while(l<=t) cout<<(b<=c?l++:t--)<<" ";
    cout<<"\n";
  }
 
  return 0;
}
/*
3
4 1 1
6 1 2
6 4 0
 
*/