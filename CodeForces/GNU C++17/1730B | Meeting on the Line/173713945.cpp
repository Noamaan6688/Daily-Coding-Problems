// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i=0;i<n;i++)
#define f1(i, n) for (int i=1;i<=n;i++)
#define fn(i, j, k) for (int i=j;i<=k;i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<fixed; cout<<setprecision(10);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 int k;cin>>k;
 vector<double>v1(k),v2(k);
 for (int i=0;i<k;i+=1) cin>>v1[i];
 for (int i=0;i<k;i+=1) cin>>v2[i];
 
 double c1=-1e9,c2=1e9;
 for (int i=0;i<k;i+=1)
 {
  c1=max(c1,v1[i]+v2[i]);
  c2=min(c2,v1[i]-v2[i]);
 }
 cout<<(c1+c2)/2.0<<"\n";
 
 return;
}
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  solve();
 }
 
  return 0;
}
/*
7
1
0
3
2
3 1
0 0
2
1 4
0 0
3
1 2 3
0 0 0
3
1 2 3
4 1 2
3
3 3 3
5 3 3
6
5 4 7 2 10 4
3 2 5 1 4 6
 
*/
 
    