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
    int b[k];
    f(i,k) cin>>b[i];
    unordered_set<int>st;
    f(i,k) st.insert(b[i]);
    int n=st.size();
    if ((k-n)%2) cout<<n-1<<"\n";
    else cout<<n<<"\n";
  }
 
  return 0;
}
/*
4
6
2 2 2 3 3 3
5
9 1 9 9 1
4
15 16 16 15
4
10 100 1000 10000
 
*/