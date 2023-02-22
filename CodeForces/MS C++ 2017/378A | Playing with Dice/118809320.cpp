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
 
int main()
{
  int p,q,r=0,s=0,t=0;cin>>p>>q;
  f1(i,6)
  {
    if (abs(p-i)==abs(q-i)) s+=1;
    else if (abs(p-i)<abs(q-i)) r+=1;
    else if (abs(p-i)>abs(q-i)) t+=1;
  }
  cout<<r<<" "<<s<<" "<<t<<endl;
  
}