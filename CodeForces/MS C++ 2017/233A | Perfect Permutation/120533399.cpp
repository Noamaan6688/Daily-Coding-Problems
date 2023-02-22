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
#define ll long long int
 
using namespace std;
 
int main() 
{
    int k;cin>>k;
    if (k>=2 && k%2==0)
    {
      for (int i=1;i<=k-1;i+=2)
      {
        cout<<i+1<<" "<<i<<" ";
      }
      cout<<endl;
    }
    else cout<<-1<<endl;  
 
  return 0;
}