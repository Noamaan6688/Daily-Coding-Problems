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
  int p,q,c=0;cin>>p>>q;
  string s;cin>>s;
  f(i,p-2) if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c') c++;
  while(q--)
  {
    int d=0;
    char a;cin>>d>>a;
    d-=1;
    fn(i,max(0,d-2),d+1) if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c') c--;
    s[d]=a;
    fn(i,max(0,d-2),d+1) if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c') c++;
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
9 10
abcabcabc
1 a
1 b
2 c
3 a
4 b
5 c
8 a
9 b
1 c
4 a
 
*/