// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  int k,c1=0,c2=0;cin>>k;
  int b[k],b1[k];
  f(i,k)
  {
    cin>>b[i];
    b1[i]=b[i];
  }
  sort(b1,b1+k);
  vector<int>v;
  f(i,k)
  {
    if (b[i]!=b1[k-1])
    {
      v.push_back(b[i]-b1[k-1]);
    }
    else v.push_back(b[i]-b1[k-2]);
  }
  for (auto i:v) cout<<i<<" ";cout<<"\n";
 
  
  return;
}
 
int main()
{
  maan
  int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
5
4
4 7 3 5
2
1 2
5
1 2 3 4 5
3
4 9 4
4
4 4 4 4
 
*/