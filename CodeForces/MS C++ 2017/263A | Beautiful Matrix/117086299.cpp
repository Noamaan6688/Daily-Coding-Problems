// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#define f(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fn(i,j,k) for(int i=j;i<=k;i++)
#define ll long long int
 
using namespace std;
int main()
{
    int m,n;
    f1(i,5)
    {
        f1(j,5)
        {
            int k=0;
            cin>>k;
            if (k==1)
            {
                m=i;n=j;
            }
        }
    }
    cout<<(abs(m-3)+abs(n-3))<<endl;
 
 return 0;   
}