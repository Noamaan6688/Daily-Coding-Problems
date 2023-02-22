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
    int p,q;cin>>p;
    int b1[p];
    f(i,p) cin>>b1[i];
    cin>>q;
    int b2[q];
    f(i,q) cin>>b2[i];
    sort(b1,b1+p);
    sort(b2,b2+q);
    if (b1[p-1]>=b2[q-1]) cout<<"Alice\n";
    else cout<<"Bob\n";
    if (b2[q-1]>=b1[p-1]) cout<<"Bob\n";
    else cout<<"Alice\n";
  }
 
  return 0;
}
/*
4
1
6
2
6 8
4
1 3 3 7
2
4 2
1
50
2
25 50
10
1 2 3 4 5 6 7 8 9 10
2
5 15
 
*/