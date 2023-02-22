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
    int p,q,c=0;cin>>p>>q;
    int *b=new int[p];
    f(i,p) cin>>b[i];
    f1(i,p-1)
    {
        if (b[i-1]-(b[i]+q)>c) c=b[i-1]-(b[i]+q);
    }
    cout<<c<<endl;
 
  return 0;
}