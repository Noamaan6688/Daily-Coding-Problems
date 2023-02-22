// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
    int k,c=0,d=0,e=0,f=0;cin>>k;
    f(i,k)
    {
        int p;cin>>p;
        if (p%2==0)
        {
            c+=1;
            e=i+1;
        }
        if (p%2==1)
        {
            d+=1;
            f=i+1;
        }
    }
    if (c==1) cout<<e<<endl;
    else cout<<f<<endl;
 
  return 0;
}