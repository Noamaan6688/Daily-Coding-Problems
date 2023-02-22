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
    int k;cin>>k;
    if (k<1400) cout<<"Division 4\n";
    else if (k<1600) cout<<"Division 3\n";
    else if (k<1900) cout<<"Division 2\n";
    else cout<<"Division 1\n";
  }
 
  return 0;
}
/*
7
-789
1299
1300
1399
1400
1679
2300
 
*/