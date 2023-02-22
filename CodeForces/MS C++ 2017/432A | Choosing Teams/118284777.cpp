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
    q=5-q;
    int* b=new int[p];
    f(i,p)
    {
        cin>>b[i];
        if (b[i]<=q) c+=1;
    }
    cout<<c/3<<endl;
 
  return 0;
}