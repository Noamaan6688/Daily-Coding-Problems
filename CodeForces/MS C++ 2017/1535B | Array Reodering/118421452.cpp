// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int gcd(int x,int y)
{
    if (x==0) return y;
    else return gcd(y%x,x);
}
 
int main()
{
   int r;cin>>r;
   while (r--)
   {
       int k,c=0;cin>>k;
       vector<int>v1;
       vector<int>v2;
        f(i,k)
        {
            int n;cin>>n;
            if (n%2==0) v1.push_back(n);
            else v2.push_back(n);
        }
        v1.insert(v1.end(),v2.begin(),v2.end());
        f(i,k)
        {
            fn(j,i+1,k-1)
            {
                if (gcd(v1[i],2*v1[j])>1) c+=1;
            }
        }
        cout<<c<<endl;
   }
 
  return 0;
}