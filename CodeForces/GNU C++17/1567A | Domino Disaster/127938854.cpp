// Hi
// #include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
// #include <set>
// #include <algorithm>
// #include <bitset>
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
using namespace chrono;
 
void solve()
{
  int r;cin>>r;while (r--)
  {
    int k;cin>>k;
    string s;cin>>s;
    string s1;
    f(i,k)
    {
      if (s[i]=='L')
      {
        if (s[i+1]=='R')
        {
          s1.append("L");s1.append("R");
        }
      }
      else if (s[i]=='U') s1.append("D");
      else if (s[i]=='D') s1.append("U");
    }
    cout<<s1<<"\n";
  }
}
 
 
int main()
{
  auto starttime = high_resolution_clock::now();
  flash
  solve();
  auto endtime = high_resolution_clock::now();
  double duration = duration_cast<microseconds>(endtime - starttime).count();
  duration/=1000000;
  cerr<<"Time Taken : "<<fixed<<setprecision(6)<<duration<<" secs"<<'\n';
 
  return 0;
}