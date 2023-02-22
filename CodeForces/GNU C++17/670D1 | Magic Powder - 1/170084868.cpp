// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
bool fa(int p,int q,int b1[],int b2[],int low,int mid,int high)
{
  int c=0;
  for (int i=0;i<p;i++)
  {
    if ((b1[i]*mid)>b2[i]) c+=(b1[i]*mid)-b2[i];
  }
  return (c<=q);
}
 
void solve()
{
  
  int p,q,c=0;cin>>p>>q;
  int b1[p],b2[p];
  f(i,p) cin>>b1[i];
  f(i,p) cin>>b2[i];
  int low=0,high=10000;
  while (low<=high)
  {
    int mid=low+(high-low)/2;
    if (fa(p,q,b1,b2,low,mid,high))
    {
      c=mid;
      low=mid+1;
    }
    else high=mid-1;
  }
  cout<<c<<"\n";
 
  return;
}
 
 
int main()
{
  flash
  // int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
3 1
2 1 4
11 3 16
 
*/