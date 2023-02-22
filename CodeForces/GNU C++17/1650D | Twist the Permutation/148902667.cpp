// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll  unsigned long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    int k;cin>>k;
    int p=k,c=0,q=0;
    vector<int>v1,v2;
    f(i,k)
    {
      int n;cin>>n;
      v1.push_back(n);
    }
    f(i,k)
    {
      auto it=find(v1.begin(),v1.end(),p);
      if (it!=v1.end())
      {
        c=it-v1.begin();
        if (c+1!=p)v2.push_back(c+1);
        else v2.push_back(0);
      }
      rotate(v1.begin(),v1.begin()+c+1,v1.end()-i);
      // f(j,v1.size()) cout<<v1[j]<<" ";cout<<"\n";
      p-=1;
    }
    // v2.push_back(0);
    reverse(v2.begin(),v2.end());
    f(i,k) 
    {
      if (v1[i]==i+1) q+=1;
      // cout<<v1[i]<<" "<<i<<" "<<q<<"\n";
    }
    if (q==k)
    {
      f(i,v2.size()) cout<<v2[i]<<" ";cout<<"\n";
    }
    else cout<<"-1\n";
  }
 
  return 0;
}
/*
3
6
3 2 5 6 1 4
3
3 1 2
8
5 8 1 3 2 6 4 7
 
*/