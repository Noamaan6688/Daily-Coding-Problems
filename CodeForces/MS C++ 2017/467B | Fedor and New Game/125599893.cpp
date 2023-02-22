// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <bitset>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int p,q,r,c=0,d=0;cin>>p>>q>>r;
  int *b=new int[q+1];
  f(i,q+1) cin>>b[i];
  string s=bitset<20>(b[q]).to_string();
  f(i,q)
  {
    string s1=bitset<20>(b[i]).to_string();
    d=0;
    f(i,20)
    {
      if (s1[i]!=s[i]) d+=1;
    }
    if (d<=r) c+=1;
  }
  cout<<c<<"\n";
 
  return 0;
}