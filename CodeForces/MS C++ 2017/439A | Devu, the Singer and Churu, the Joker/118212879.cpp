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
 int p,q,s1=0,s2=0;cin>>p>>q;
 int* b=new int[p];
 f(i,p)
 {
  cin>>b[i];
  if (i!=p-1) s1+=10;
  s2+=b[i];
 }
 s1+=s2;
 // cout<<s2<<" "<<s1<<endl;
 if (s1>q || s2>q) cout<<-1<<endl;
 else cout<<(q-s2)/5<<endl;
 
 return 0;
}