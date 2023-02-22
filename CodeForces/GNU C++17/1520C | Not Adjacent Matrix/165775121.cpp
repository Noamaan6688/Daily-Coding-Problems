// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j;i<=k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
    int k,i=0,s=0;cin>>k;
  if (k==1) cout<<"1\n";
  else if (k==2) cout<<"-1\n";
  else
    {
   for(i=0;i+1<=(k*k);i+=2)
      {
    if (s>0 && (s%k)==0) cout<<"\n";
    cout<<i+1<<" ";
        s+=1;
   }
   for(i=0;i+2<=(k*k);i+=2)
      {
    if ((s%k)==0) cout<<"\n";
    cout<<i+2<<" ";
        s+=1;
   }
    }  
  }
 
  return 0;
}
/*
3
1
2
3
 
*/