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
    int c=s.size()-1,k=s.size(),d=0;
    f(i,k)
    {
      fn(j,i+1,k-1)
      {
        // cout<<s[i]<<" "<<s[j]<<"\n";
        if (s[j]==s[i])break;
        if (s[j]!=s[i] && j==k-1) d=1;
      }
      if (d==1)
      {
        c=i;break;
      }  
    }
    fn(i,c,k-1) cout<<s[i];cout<<"\n";
  }
 
  return 0;
}
/*
6
abcabdc
a
bbbbbbbbbb
codeforces
cffcfccffccfcffcfccfcffccffcfccf
zyzyzwxxyyxxyyzzyzzxxwzxwywxwzxxyzzw
 
*/