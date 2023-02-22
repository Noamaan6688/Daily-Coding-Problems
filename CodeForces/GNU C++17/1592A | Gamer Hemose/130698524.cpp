// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  ll r;cin>>r;while (r--)
  {
    ll p,q,c=0,d=0,m=0,n=0;cin>>p>>q;
    vector<ll>v;
    // set<ll>s;
    f(i,p)
    {
      ll t;cin>>t;
      v.push_back(t);
    }
    // auto it=s.end();
    // it--;
    // m=*it;
    // it--;
    // n=*it;
    sort(v.begin(),v.end());
    m=v[p-1];
    n=v[p-2];
    if (q>m)
    {
      d=(q%(m+n));
      c+=(q/(m+n));
      c*=2;
      
      if (d>m && d!=0) c+=2;
      else if (d!=0) c+=1;
    }
    else c=1;
 
 
    // sort(v.begin(),v.end());
    // while (q>0)
    // {
    //   if (d==0)
    //   {
    //     q-=m;
    //     d=1;
    //   }
    //   else
    //   {
    //     q-=n;
    //     d=0;
    //   }
    //   c+=1;
    // }
    cout<<c<<"\n";
  }
 
  return 0;
}