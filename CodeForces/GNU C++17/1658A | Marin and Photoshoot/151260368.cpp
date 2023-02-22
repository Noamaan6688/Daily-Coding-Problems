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
    int k,c1=-1,c2=-1,c3=0;cin>>k;
    string s;cin>>s;
    f(i,k)
    {
      if (s[i]=='0')
      {
        c1=i;
        if (((c1-c2)==1) && (c2!=-1)) c3+=2;
        else if (((c1-c2)==2) && (c2!=-1)) c3+=1;
        // cout<<c1<<" "<<c2<<" "<<c3<<"\n";
      }
      c2=c1;
    }
    cout<<c3<<"\n";
  }
 
  return 0;
}
/*
9
3
000
3
001
3
010
3
011
3
100
3
101
3
110
3
111
19
1010110000100000101
 
*/