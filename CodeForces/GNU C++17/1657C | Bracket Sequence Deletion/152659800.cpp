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
    int k,p=0,q=0;cin>>k;
    string s;cin>>s;
    f1(i,k-1)
    {
      if ((s[p]=='(' && s[i]==')') || (s[p]==s[i]))
      {
        i+=1;
        p=i;q+=1;
      }
      // cout<<p<<" "<<i<<"\n";
    }
    cout<<q<<" "<<k-p<<"\n";
  }
 
  return 0;
}
/*
5
2
()
3
())
4
((((
5
)((()
6
)((()(
 
*/