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
    int k;cin>>k;
    char **b;
    b=new char*[k];
    f(i,k) b[i]=new char[k];
    f(i,k)
    {
        f(j,k)
        {
            cin>>b[i][j];
        }
    }
    f(i,k)
    {
        f(j,k)
        {
            int c=0;
            if (i!=0)
            {
                if (b[i-1][j]=='o') c+=1;
            }
            if (i!=k-1)
            {
                if (b[i+1][j]=='o') c+=1;
            }
            if (j!=0)
            {
                if (b[i][j-1]=='o') c+=1;
            }
            if (j!=k-1)
            {
                if (b[i][j+1]=='o') c+=1;
            }
            if (c%2==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
 
  return 0;
}