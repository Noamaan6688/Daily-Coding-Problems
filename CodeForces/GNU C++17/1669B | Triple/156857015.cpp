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
    int k,c=0;cin>>k;
    unordered_map<int,int>mp;
    f(i,k)
    {
      int n;cin>>n;
      mp[n]++;
    }
    for (auto i:mp) if (i.second>=3) c=i.first;
    if (c==0) cout<<"-1\n";
    else cout<<c<<"\n";
  }
 
  return 0;
}
/*
7
1
1
3
2 2 2
7
2 2 3 3 4 2 2
8
1 4 3 4 3 2 4 1
9
1 1 1 2 2 2 3 3 3
5
1 5 2 4 3
4
4 4 4 4
 
*/