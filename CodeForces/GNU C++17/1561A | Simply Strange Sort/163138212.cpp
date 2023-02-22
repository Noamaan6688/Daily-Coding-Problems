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
  int k,c=0;cin>>k;
        int b[k];
        f(i,k) cin>>b[i];
        while(!is_sorted(b,b+k))
        {
       for(int i=c%2;i<=k-2;i+=2) if(b[i]>b[i+1]) swap(b[i],b[i+1]);
   c+=1;
  }
  cout<<c<<"\n";
 }
 
  return 0;
}
/*
3
3
3 2 1
7
4 5 7 1 3 2 6
5
1 2 3 4 5
 
*/