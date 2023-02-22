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
    int k;cin>>k;
    int b1[k],b2[k];
    f(i,k) cin>>b1[i];
    f(i,k) cin>>b2[i];
    vector<int>v;
    f(i,k)
    {
      f(j,k-1)
      {
        if (b1[j]>b1[j+1] || b2[j]>b2[j+1])
        {
          swap(b1[j],b1[j+1]);
          swap(b2[j],b2[j+1]);
          v.push_back(j);
          v.push_back(j+1);
        }
      }
    }
    // f(i,v.size()) cout<<v[i]<<" ";cout<<"\n";
    if (is_sorted(b1,b1+k) && is_sorted(b2,b2+k))
    {
      cout<<v.size()/2<<"\n";
      for (int i=0;i<v.size();i+=2) cout<<v[i]+1<<" "<<v[i+1]+1<<"\n";
    }
    else cout<<"-1\n";
  }
 
  return 0;
}
/*
3
2
1 2
1 2
2
2 1
1 2
4
2 3 1 2
2 3 2 3
 
*/