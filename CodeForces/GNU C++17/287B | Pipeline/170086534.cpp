// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
// bool fa(int p,int q,int b1[],int b2[],int low,int mid,int high)
// {
//   int c=0;
//   for (int i=0;i<p;i++)
//   {
//     if ((b1[i]*mid)>b2[i]) c+=(b1[i]*mid)-b2[i];
//   }
//   return (c<=q);
// }
 
void solve()
{
  ll n,k;cin>>n>>k;
 ll low=0,high=k-1;
 if ((k*(k-1))/2<n-1)
  {
    cout<<"-1\n";
    return;
  } 
 ll c=k*(k-1)/2;
 while(high>=low)
 {
  ll mid=low+(high-low)/2;
  if(c-(mid*(mid+1))/2 <n-1) high=mid-1; 
  else low=mid+1;
   
 }
 cout<<k-low<<"\n";
 
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
4 3
 
*/