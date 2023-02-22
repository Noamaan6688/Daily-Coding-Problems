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
   int k=s.size();
   if ((s[k-1]-'0')%2==0) cout<<"0\n";
   else if ((s[0]-'0')%2==0) cout<<"1\n";
   else
   {
    bool t=false;
    f(i,k) if ((s[i]-'0')%2==0) t=true;
    if (t) cout<<"2\n";
    else cout<<"-1\n";
   }
  }
 
  return 0;
}
/*
4
3876
387
4489
3
 
*/