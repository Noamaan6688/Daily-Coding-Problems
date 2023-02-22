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
    string s;cin>>s;
    int p,q=0,c=0;cin>>p;
    unordered_set<int>st;
    q+=(((s[0]-'0')*10)+(s[1]-'0'))*60;
    q+=(((s[3]-'0')*10)+(s[4]-'0'));
    while(st.count(q)==0)
    {
      st.insert(q);
      int a=q/60;
      int b=q%60;
      if(a/10 == b%10 && a%10 == b/10) c++;
      q=(q+p)%1440;
    }
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
6
03:12 360
00:00 1
13:22 2
15:15 10
11:11 1440
22:30 27
 
*/