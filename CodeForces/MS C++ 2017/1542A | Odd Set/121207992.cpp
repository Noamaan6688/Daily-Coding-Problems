// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
    int r;cin>>r;
    while (r--)
    {
        int k,c=0,d=0;
        cin>>k;k*=2;
        int *b=new int[k];
        f(i,k)
        {
            cin>>b[i];
            if (b[i]%2==0) c+=1;
            else d+=1;
        }
        if (c==d) cout<<"Yes\n";
        else cout<<"No\n";
    }
 
 return 0;   
}