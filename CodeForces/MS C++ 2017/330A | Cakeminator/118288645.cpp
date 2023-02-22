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
    int p,q;cin>>p>>q;
    char **b;
    b=new char*[p];
    f(i,p) b[i]=new char[q];
    int c=0,d=0,e=0,f=0,s=0;
    f(i,p)
    {
        e=0;
        f(j,q)
        {
            cin>>b[i][j];
            if (b[i][j]=='.') e+=1; 
        }
        if (e==q) c+=1;
    }
    f(i,q)
    {
        f=0;
        f(j,p)
        {
            if (b[j][i]=='.')f+=1;
        }
        if (f==p) d+=1;
    }
    s=(c*q)+(d*p)-(c*d);
    cout<<s<<endl;
 
  return 0;
}